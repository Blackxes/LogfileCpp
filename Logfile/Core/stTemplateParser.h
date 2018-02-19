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
//	this file contains the template parser class structure
//	this class expects string templates containing marker and parses them
//	based on a user defined markup into a new string and returns it
//
//*********************************************************************************************
//
#pragma once
#ifndef ST_TEMPLATEPARSER
#define ST_TEMPLATEPARSER

//_____________________________________________________________________________________________
// configurations

// pre-/suffix of a marker / this string will be added in front and at the end to value
// in order to recognize a marker / marker are casesensitive as well!
const std::string g_stTemplateMarkerXFix = "###";

//_____________________________________________________________________________________________
// datatype shorthands for using the class
//
// param1 (std::string) expects the marker label / how the marker actually is named
// param2 (std::string) expects the value as a string / has to be casted to a string
//		simply use the stTemplateParser::buildMarker function to create a marker and paste it here
using mTemplateMarker = std::map<std::string, std::string>;

//_____________________________________________________________________________________________
//
class SIMPLETRY_API stTemplateParser {

	//-----------------------------------------------------------------------------------------
	private:
		//

	//-----------------------------------------------------------------------------------------
	public:
		// no constructions with this class since it should only be used statically
		stTemplateParser() = delete;
		~stTemplateParser() = delete;
		stTemplateParser(const stTemplateParser& rhs) = delete;
		
		// parses a template with the given markup and returns its result
		//
		// param1 (const std::string&) expects the template
		// param2 (const std::list<mTemplateMarker>&) expects a list of template marker
		//
		static void parseMarkup(const std::string& sTemplate, std::list<mTemplateMarker>& liMarkup);

		// returns a substr from another string
		//
		// param1 (const std::string&) expects the template
		// param2 (const std::string&) expects the marker that surrounds the substring
		//
		static std::string getSubpart(const std::string& sTemplate, const std::string& );

		// replaces a set of marker within a string (template)
		//
		// param1 (const std::string&) expects the template
		// param2 (const std::list<templateMarker>&)
		//
		static std::string replaceMarker(const std::string& sTemplate, const std::list<mTemplateMarker>& liMarkup);

	//-----------------------------------------------------------------------------------------
	//
};

//_____________________________________________________________________________________________
#endif