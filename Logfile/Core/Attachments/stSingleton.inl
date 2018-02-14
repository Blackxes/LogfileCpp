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

//_____________________________________________________________________________________________
// constructor
template <class T>
inline stSingleton<T>::stSingleton() {
	//
	delete Instance;
	Instance = nullptr;
}

//_____________________________________________________________________________________________
// returns an instance of a class / when instance doesnt exist a new one will be created
template <class T>
inline static T* stSingleton<T>::GetInstance() {

	// create when not exists
	if (!stSingleton::Instance)
		stSingleton::Instance = new T;
	//
	return stSingleton::Instance;
}

//_____________________________________________________________________________________________
// deletion of the instance
template <class T>
static void stSingleton<T>::Del() {
	//
	if (stSingleton::Instance != nullptr)
		delete stSingleton::Instance;
	//
	stSingleton::Instance = nullptr;
}

//_____________________________________________________________________________________________
//