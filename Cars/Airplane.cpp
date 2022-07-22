#include "Airplane.h"
#include <iostream>


// Constructors
// Default constructor:
Airplane::Airplane() : Vehicle()
{
    std::cout << " Airplane default constructor" << std::endl;

    m_airline = "Unspecified";
}

Airplane::Airplane(int year, int miles, std::string airline) : Vehicle(year, miles)
{
    m_year = year;
    m_miles = miles;
    m_airline = airline;
}

// Destructor
Airplane::~Airplane()
{
    std::cout << " Airplane destructor!" << std::endl;
}

//// Member variables
//int m_year;
//int m_miles;
//std::string m_airline;

// Member functions
void Airplane::Display()
{
    std::cout << "Year: " << m_year << std::endl;
    std::cout << "Miles: " << m_miles << std::endl;
    std::cout << "Airline: " << m_airline << std::endl;
}

void Airplane::Display(int year, int miles, std::string airline)
{
    std::cout << "Year: " << year << std::endl;
    std::cout << "Miles: " << miles << std::endl;
    std::cout << "Airline: " << airline << std::endl;
}

void Airplane::Drive(int miles)
{
    m_miles += miles;
    std::cout << "This airplane has traveled a total of " << miles << " miles." << std::endl;

}