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
#ifndef LOGFILE_API
	#define LOGFILE_API __declspec(dllexport)
#else
	#define LOGFILE_API __declspec(dllimport)
#endif

//_____________________________________________________________________________________________
// library header
#include <iostream>
#include <string>
#include <list>
#include <map>
#include <fstream>

//_____________________________________________________________________________________________
// datatypes
using UINT = unsigned int;

//_____________________________________________________________________________________________
// states
enum stState {
	//
	ST_NONE,
	ST_OK,
	ST_FAIL,
	ST_NOT_FOUND,
	ST_INCORRECT,	// when something went almost nice but something still messed up
	ST_CANCEL,
	ST_COUNTER,
};

//_____________________________________________________________________________________________
// header
#include <Core\Attachments\stHeader.h>
//
#include <Core\lConfiguration.h>
#include <Core\lReport.h>
#include <Core\Logfile.h>

//_____________________________________________________________________________________________
#endif