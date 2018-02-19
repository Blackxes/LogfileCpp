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
//	this file contains the inclusion of header and ressources
//
//*********************************************************************************************
//
#pragma once
#ifndef L_HEADER
#define L_HEADER

//_____________________________________________________________________________________________
// define dll export/import
#if (PR_DEBUG == 1)
	#define SIMPLETRY_API __declspec(dllexport)
#elif (PR_RELEASE == 1)
	#define SIMPLETRY_API __declspec(dllimport)
#else
	#define SIMPLETRY_API
#endif

//_____________________________________________________________________________________________
// library header
//#include <Windows.h>
//#include <tchar.h>
#include <iostream>
#include <string>
#include <list>
#include <map>
#include <fstream>
#include <ctime>

//_____________________________________________________________________________________________
// datatypes
using UINT = unsigned int;

//_____________________________________________________________________________________________
// states
enum SIMPLETRY_API stState {
	//
	ST_NONE,
	ST_OK,
	ST_FAIL,
	ST_NOT_FOUND,
	ST_INCORRECT,	// when something went almost nice but something still messed up
	ST_CANCEL,
	ST_COUNTER,
};

// logfile report types
enum SIMPLETRY_API LogfileReportTypes {
	//
	RT_NONE = -1,
	RT_ERROR = 0,
	RT_INFO = 10,
	RT_WARNING = 20,
	RT_OTHER = 100
};

//_____________________________________________________________________________________________
// definitions
const std::string g_tPage = "./Core/Ressources/template_page";
const std::string g_tReport = "./Core/Ressources/template_report";
//
const std::string g_lFilename = "logfile.html";
const std::string g_lPath = "./";
const std::string g_lFile = g_lPath + g_lFilename;
//
#define RT_ERROR LogfileReportTypes::RT_ERROR
#define RT_INFO LogfileReportTypes::RT_INFO
#define RT_WARNING LogfileReportTypes::RT_WARNING
#define RT_OTHER LogfileReportTypes::RT_OTHER

//_____________________________________________________________________________________________
// header
#include <Core\stSupporter.h>
#include <Core\stTemplateParser.h>
#include <Core\stLogfile.h>

//_____________________________________________________________________________________________
#endif