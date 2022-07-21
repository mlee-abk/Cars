#pragma once

#include "Vehicle.h"

#include <string>
using std::string;

class Airplane : Vehicle
{
	// Member variables
	string m_airline;

public:
	// Constructors

	// Default Constructor
	Airplane();

	// Other Constructors
	Airplane(int year, int miles, std::string airline);

	// Destructor
	~Airplane();

	// Member functions
	void Display();
	void Drive(int miles);
};