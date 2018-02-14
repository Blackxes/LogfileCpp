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
//	this file contains several functions which make life easier
//	eg. std::string::replace is usable like this s.replace(needle, replacer)
//
//*********************************************************************************************
//
#pragma once
#ifndef ST_SUPPORTER
#define ST_SUPPORTER

//_____________________________________________________________________________________________
// replaces a substring within a string
//
// param1 (const std::string) expects the string to search for
// param2 (const std::string) expects the replacement
// param3 (const std::string&) expects the string inwhere the needle can be found
//
std::string stStringReplace(const std::string sNeedle, const std::string sReplacement, const std::string& sContainer);

//_____________________________________________________________________________________________
#endif