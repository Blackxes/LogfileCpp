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
//	this file contains the configuration for the logfile
//
//*********************************************************************************************
//
#pragma once
#ifndef L_CONFIGURATION
#define L_CONFIGURATION

//_____________________________________________________________________________________________
// report types
enum LogfileReportTypes {
	//
	RT_NONE = -1,
	RT_ERROR = 0,
	RT_INFO = 10,
	RT_WARNING = 20,
	RT_OTHER = 100
};

//_____________________________________________________________________________________________
#endif