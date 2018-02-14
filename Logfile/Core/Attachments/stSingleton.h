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
//	contains a singleton class to provide instance to exists only once
//
//*********************************************************************************************
//
#pragma once
#ifndef ST_SINGLETON
#define ST_SINGLETON

//_____________________________________________________________________________________________
// template class to provide instance to exist only once
template <class T>
class stSingleton {

	//-----------------------------------------------------------------------------------------
	protected:

		// contains the unique instance
		static T* Instance;

		// deletion of this instance
		static void Del();

	//-----------------------------------------------------------------------------------------
	public:
		//
		stSingleton();
		virtual ~stSingleton() {}
		stSingleton(const stSingleton<T>& rhs) = delete;

		// returns the instance of this object
		// either it instantiates a new one or returns the existing one
		//
		inline static T* GetInstance();
};

//_____________________________________________________________________________________________
// header
#include <Core\Attachments\stSingleton.inl>

//_____________________________________________________________________________________________
#endif