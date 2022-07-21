#include "Vehicle.h"
#include <iostream>

// Constructors

// Default constructor:
Vehicle::Vehicle()
{
	std::cout << "Vehicle default constructor" << std::endl;

	m_year = 2022;
	m_miles = 0;
}

Vehicle::Vehicle(int year, int miles)
{
	m_year = year;
	m_miles = miles;
}

// Destructor
Vehicle::~Vehicle()
{
	std::cout << "Vehicle destructor!" << std::endl;
}

// Member variables
int m_years;
int m_miles;

// Member functions
void Vehicle::Display()
{
	std::cout << "Year: " << m_year << std::endl;
	std::cout << "Miles: " << m_miles << std::endl;
}