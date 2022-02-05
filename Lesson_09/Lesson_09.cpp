#include<iostream>
#include "Car.h"
#include "Car.cpp"
#include "Audi.h"
#include "Audi.cpp"
#include "BMW.h"
#include "BMW.cpp"
using namespace std;

template<class T>
void PolimorphDisplay(Car<T>* car)
{
	cout << car->ToString() << endl;
}

int main()
{
	Audi<int> audi;
	BMW<int> bmw;
	Car<int>* car;

	car = &audi;
	car->SetParams(3, "{\"model\": \"100\", \"color\" : \"red\", \"capacity\" : \"2.3\"}");
	car->SetParams(6, "{\"model\": \"100\", \"color\" : \"red\", \"capacity\" : \"2.3\"}");
	cout << "###Audi 100###" << endl;
	PolimorphDisplay(car);

	car = &bmw;
	car->SetParams(3, "{\"model\": \"520\", \"color\" : \"black\", \"capacity\" : \"2.5\"}");
	car->SetParams(6, "{\"model\": \"520\", \"color\" : \"black\", \"capacity\" : \"2.5\"}");
	cout << "###BMW 520###" << endl;
	PolimorphDisplay(car);

}