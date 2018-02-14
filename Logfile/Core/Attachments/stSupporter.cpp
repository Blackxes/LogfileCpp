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

//_____________________________________________________________________________________________
// header
#include <Core\Attachments\stHeader.h>

//_____________________________________________________________________________________________
// replaces strings with a substr
std::string stStringReplace(const std::string sNeedle, const std::string sReplacement, const std::string& sContainer) {
	
	//
	int iIndex = sContainer.find(sNeedle);
	return (iIndex != std::string::npos) ? std::string(sContainer).replace(iIndex, (int) sNeedle.size(), sReplacement) : std::string(sContainer);
}

//_____________________________________________________________________________________________
//