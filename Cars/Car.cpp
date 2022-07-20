#include "Car.h"
#include <iostream>


//Constructors
// Default constructor:
Car::Car()
{
    std::cout << "default constructor" << std::endl;

    m_year = 2022;
    m_miles = 0;
    m_brand = "Unspecified";
}

Car::Car(int year, int miles, std::string brand)
{
    m_year = year;
    m_miles = miles;
    m_brand = brand;
}

// Destructor
Car::~Car()
{
    std::cout << "destructor!" << std::endl;
}

// Member variables
int m_year;
int m_miles;
std::string m_brand;

// Member functions
void Car::Display()
{
    std::cout << "Year: " << m_year << std::endl;
    std::cout << "Miles: " << m_miles << std::endl;
    std::cout << "Brand: " << m_brand << std::endl;
}

void Car::Drive(int miles)
{
    m_miles += m_miles;
}