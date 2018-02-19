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
//	this file contains the definition of the template parser class
//
//*********************************************************************************************

//_____________________________________________________________________________________________
// header
#include <Core\stHeader.h>

//_____________________________________________________________________________________________
// parses a template with the given markup and returns its result
void stTemplateParser::parseMarkup(const std::string& sTemplate, std::list<mTemplateMarker>& liMarkup) {
	//
}

//_____________________________________________________________________________________________
// returns a substr from another string
std::string stTemplateParser::getSubpart(const std::string& sTemplate, const std::string& sMarker) {
	//
	if (!sMarker.size())
		return sTemplate;
	//
	int iPos1 = sTemplate.find(sMarker);
	int iPos2 = sTemplate.find(sMarker, iPos1 + sMarker.size());
	//
	std::string sSubpart = sTemplate.substr( iPos1 + sMarker.size(), iPos2 - iPos2 + sMarker.size() );
	//
	return (!sSubpart.size()) ? sSubpart : std::string(sTemplate);
}

//_____________________________________________________________________________________________
// replaces a set of marker within a string (template)
std::string stTemplateParser::replaceMarker(const std::string& sTemplate, const std::list<mTemplateMarker>& liMarkup) {
	//
	return "";
}

//_____________________________________________________________________________________________
//









//
//std::string stStringReplace(const std::string sNeedle, const std::string sReplacement, const std::string& sContainer) {
//	
//	//
//	int iIndex = sContainer.find(sNeedle);
//	return (iIndex != std::string::npos) ? std::string(sContainer).replace(iIndex, (int) sNeedle.size(), sReplacement) : std::string(sContainer);
//}

//_____________________________________________________________________________________________
//