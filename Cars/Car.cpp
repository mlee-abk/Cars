#include "Car.h"
#include <iostream>


// Constructors
// Default constructor:
Car::Car() : Vehicle()
{
    std::cout << " Car default constructor" << std::endl;

    m_brand = "Unspecified";
}

Car::Car(int year, int miles, std::string brand) : Vehicle(year, miles)
{
    m_year = year;
    m_miles = miles;
    m_brand = brand;
}

// Destructor
Car::~Car()
{
    std::cout << " Car destructor!" << std::endl;
}

//// Member variables
//int m_year;
//int m_miles;
//std::string m_brand;

// Member functions
void Car::Display()
{
    std::cout << "Year: " << m_year << std::endl;
    std::cout << "Miles: " << m_miles << std::endl;
    std::cout << "Brand: " << m_brand << std::endl;
}

void Car::Display(int year, int miles, std::string brand)
{
    std::cout << "Year: " << year << std::endl;
    std::cout << "Miles: " << miles << std::endl;
    std::cout << "Brand: " << brand << std::endl;
}

void Car::Drive(int miles)
{
    m_miles += miles;
    std::cout << "This car has traveled a total of " << miles << " miles." << std::endl;

}