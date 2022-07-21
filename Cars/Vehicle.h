#pragma once
#include <string>

class Vehicle
{

public:

	// Constructors

	// Default Constructor
	Vehicle();

	// Other Constructors
	Vehicle(int year, int miles);

	// Destructor
	~Vehicle();

	// Member functions
	void Display();

	// Pure virtual (abstract) member function
	virtual void Drive(int miles)=0;

protected:

	// Member variables
	int m_year;
	int m_miles;

};