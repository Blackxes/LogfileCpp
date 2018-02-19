//_____________________________________________________________________________________________
//*********************************************************************************************
//
//	this file is part of the simpletry engine
//
//	Author: Alexander Bassov
//	Email: blackxes@gmx.de
//	Github: https://www.github.com/Blackxes
//
//	@File
//	this file contains the definitions of the logfile class
//
//*********************************************************************************************
//

/*
	marker:
	###REPORT_TYPE_ID###
	###REPORT_TYPE_LABEL###
	###REPORT_DESCRIPTION###
	###FILE###
	###ROW###
	###REPORT_TIMESTAMP###
*/

//_____________________________________________________________________________________________
// header
#include <Core\stHeader.h>

//_____________________________________________________________________________________________
// constructor
Logfile::Logfile()
	: m_reportCounter (0)
{
	/* ... */
}

//_____________________________________________________________________________________________
// desctructor
Logfile::~Logfile() {
	/* ... */
}

//_____________________________________________________________________________________________
// initialization
stState Logfile::Init() {

	// read templates
	m_sTemplatePage = std::string( std::istreambuf_iterator<char>(std::ifstream(g_tPage, std::ios::in)), std::istreambuf_iterator<char>() );
	m_sTemplateReport = std::string( std::istreambuf_iterator<char>(std::ifstream(g_tReport, std::ios::in)), std::istreambuf_iterator<char>() );

	// save
	std::ofstream initialSave(g_lFile, std::ios::out);
	initialSave << m_sTemplatePage;
	initialSave.close();

	//
	return ST_OK;
}

//_____________________________________________________________________________________________
// writes a report into the logfile with manual defined specifications
stState Logfile::log(
	LogfileReportTypes ReportType,
	std::string sMessage,
	std::string sFile,
	UINT uiRow)
{
	// build msg and replace it within the file
	std::string report = m_sTemplateReport;
	report = stStringReplace("###REPORT_ID###", std::to_string(m_reportCounter), report);
	report = stStringReplace("###REPORT_TYPE_ID###", std::to_string(ReportType), report);
	report = stStringReplace("###REPORT_TYPE_LABEL###", std::to_string(ReportType), report);
	report = stStringReplace("###REPORT_DESCRIPTION###", sMessage, report);
	report = stStringReplace("###FILE###", sFile, report);
	report = stStringReplace("###ROW###", std::to_string(uiRow), report);

	// get timestamp
	report = stStringReplace("###REPORT_TIMESTAMP###", std::to_string(static_cast<int>(time_t(std::time(0)))), report);
	//
	std::string sLogContent = stStringReplace("<!-- ###NEXT_REPORT### -->", report, std::string( std::istreambuf_iterator<char>(std::ifstream(g_lFile, std::ios::in)), std::istreambuf_iterator<char>() ));

	// save
	std::ofstream update(g_lFile, std::ios::out);
	update << sLogContent;
	update.close();
	//
	m_reportCounter++;

	//
	return ST_OK;
}

//_____________________________________________________________________________________________
int main() {

	//
	Logfile* Log = new Logfile;
	Log->Init();

	//
	Log->log(RT_ERROR, "this is an ss for an error message");
	Log->log(RT_INFO, "this is an example for an info message");
	Log->log(RT_WARNING, "this is an example for a warning message");
	Log->log(RT_OTHER, "this is an example for a warning message");
	
	//
	delete Log;
	Log = nullptr;

	//
	return 0;
}

//_____________________________________________________________________________________________
//