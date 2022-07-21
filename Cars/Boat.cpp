#include "Boat.h"
#include <iostream>


// Constructors
// Default constructor:
Boat::Boat() : Vehicle()
{
    std::cout << " Boat default constructor" << std::endl;

    m_brand = "Unspecified";
}

Boat::Boat(int year, int miles, std::string brand) : Vehicle(year, miles)
{
    m_year = year;
    m_miles = miles;
    m_brand = brand;
}

// Destructor
Boat::~Boat()
{
    std::cout << " Boat destructor!" << std::endl;
}

//// Member variables
//int m_year;
//int m_miles;
//std::string m_brand;

// Member functions
void Boat::Display()
{
    std::cout << "Year: " << m_year << std::endl;
    std::cout << "Miles: " << m_miles << std::endl;
    std::cout << "Brand: " << m_brand << std::endl;
}

void Boat::Drive(int miles)
{
    m_miles += miles;
    std::cout << "This boat has traveled a total of " << miles << " miles." << std::endl;

}