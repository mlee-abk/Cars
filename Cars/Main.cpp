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
    myCar.Display();
    myCar.Drive(250);

    Boat myBoat;
    myBoat.Display();
    myBoat.Drive(100);

    Airplane myAirplane;
    myAirplane.Display();
    myAirplane.Drive(5000);
}
