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
//	this file contains the container for a report / information container
//
//*********************************************************************************************
//
#pragma once
#ifndef L_REPORT
#define L_REPORT

//_____________________________________________________________________________________________
// information container for a report in the logfile
struct lReport {
	//
	LogfileReportTypes ReportType = LogfileReportTypes::RT_OTHER;
	//
	std::string sMsg = "";
	std::string sFile = "unknown";
	//
	int iRow = -1;
	int timestamp = 0;
};

//_____________________________________________________________________________________________
#endif