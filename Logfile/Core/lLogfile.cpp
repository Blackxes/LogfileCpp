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
#include <Core\lHeader.h>

//_____________________________________________________________________________________________
// constructor
Logfile::~Logfile() {
	//
}

//_____________________________________________________________________________________________
// initialization
stState Logfile::Init() {

	// prepare values
	//std::string sPage = g_tPage;

	// replace initial marker
	//g_tPage.replace()

	//
	return ST_OK;
}

//_____________________________________________________________________________________________
// writes a report into the logfile by a report instance
stState Logfile::log(lReport Report) {

	//
	return ST_OK;
}

//_____________________________________________________________________________________________
// writes a report into the logfile with manual defined specifications
stState Logfile::log(
	LogfileReportTypes ReportType,
	std::string sMessage,
	size_t sFile,
	size_t uiRow,
	size_t uiTimestamp)
{
	//


	//
	return ST_OK;
}

//_____________________________________________________________________________________________
//
int main() {

	//Log->log(RT_ERROR, "Sicke Nachricht", __FILE__, __LINE__, __TIMESTAMP__);

	//
	return 0;
}

//_____________________________________________________________________________________________
//