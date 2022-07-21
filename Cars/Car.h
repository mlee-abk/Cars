#pragma once

#include "Vehicle.h"

#include <string>
using std::string;

class Car : Vehicle
{
	// Member variables
	string m_brand;

public:
	// Constructors

	// Default Constructor
	Car();

	// Other Constructors
	Car(int year, int miles, std::string brand);

	// Destructor
	~Car();

	// Member functions
	void Display();
	void Drive(int miles);
};