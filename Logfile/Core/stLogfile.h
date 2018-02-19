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
//	this file contains the class structure and functionality of the logfile class
//
//*********************************************************************************************
//
#pragma once
#ifndef LOGFILE
#define LOGFILE

//_____________________________________________________________________________________________
// transition class
class SIMPLETRY_API Logfile {

	//-----------------------------------------------------------------------------------------
	private:
		//
		int m_reportCounter;
		//
		std::string m_sTemplatePage;
		std::string m_sTemplateReport;

	//-----------------------------------------------------------------------------------------
	public:
		Logfile();
		~Logfile();
		Logfile(const Logfile& rhs) = delete;

		// initialization
		stState Init();

		// writes a report into the logfile by manual definition
		//
		// param1
		stState log(LogfileReportTypes ReportType, std::string sMessage, std::string sFile = "-", UINT uiRow = -1);
};

//_____________________________________________________________________________________________
#endif