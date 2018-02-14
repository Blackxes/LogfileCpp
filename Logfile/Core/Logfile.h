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
class Logfile : public stSingleton<Logfile> {

	//-----------------------------------------------------------------------------------------
	private:
		//
		int iIdCounter;
		

	//-----------------------------------------------------------------------------------------
	public:
		Logfile() {};
		~Logfile();
		Logfile(const Logfile& rhs) = delete;

		// initialization
		stState Init();

		// writes a report into the logfile by a report instance
		stState log(lReport);

		// writes a report into the logfile by manual definition
		stState log(LogfileReportTypes ReportType, std::string sMessage, size_t sFile, size_t uiRow, size_t uiTimestamp);
};

//_____________________________________________________________________________________________
// single instance
Logfile* Log = Logfile::GetInstance();

//_____________________________________________________________________________________________
#endif