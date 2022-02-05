#include "Car.h"

template<class T>
inline Car<T>::Car()
{
	cout << "Constructor base Car:\t" << this << endl;
}

template<class T>
inline Car<T>::~Car()
{
	cout << "Destructor base Car:\t" << this << endl;

}

