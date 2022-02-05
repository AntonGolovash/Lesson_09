#include "BMW.h"

template<class T>
BMW<T>::BMW() : Car<T>()
{
	cout << "BMW constructor default:\t" << this << endl;
}

template<class T>
BMW<T>::~BMW()
{
	cout << "BMW destructor:\t" << this << endl;
}

template<class T>
void BMW<T>::SetParams(T key, string jsonValue)
{
	this->_params.insert(pair<T, string>(key, jsonValue));
}

template<class T>
string BMW<T>::ToString()
{
	this->ss << "car:\t" << typeid(this).name() << endl;
	for (auto it = this->_params.begin(); it != this->_params.end(); it++)
		this->ss << "key:\t" << it->first << "\t" << "data:\t" << it->second << "\t\n";
	return this->ss.str();
}