#include "Car.h"
#include "Boat.h"
#include "Airplane.h"
#include <iostream>
#include <string>

int main()
{
    
    /*Car* pMyCar = new Car;

    if (pMyCar != nullptr)
    {
        Car myCar;
    }

    delete pMyCar;

    Car myCar(2019, 20, "BMW");

    Car* pCar = new Car(2018, 30, "Ford");
    delete pCar;
    pCar = nullptr;*/

    Car myCar;
    myCar.Display(2018, 25000, "Chevy Cruz");
    myCar.Drive(25000);

    Boat myBoat;
    myBoat.Display(2017, 3500, "Yamaha");
    myBoat.Drive(3500);

    Airplane myAirplane;
    myAirplane.Display(2019, 15039718, "Delta");
    myAirplane.Drive(15039718);
}
