#pragma once

#include "Vehicle.h"

#include <string>
using std::string;

class Boat : Vehicle
{
	// Member variables
	string m_brand;

public:
	// Constructors

	// Default Constructor
	Boat();

	// Other Constructors
	Boat(int year, int miles, std::string brand);

	// Destructor
	~Boat();

	// Member functions
	void Display();
	void Display(int year, int miles, std::string brand);
	void Drive(int miles);
};