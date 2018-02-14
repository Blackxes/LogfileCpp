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

//_____________________________________________________________________________________________
// header
#include <Core\Attachments\stHeader.h>

//_____________________________________________________________________________________________
// declarations
template <class T>
T* stSingleton<T>::Instance = nullptr; 

//_____________________________________________________________________________________________
//