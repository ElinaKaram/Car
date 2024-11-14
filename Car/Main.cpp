#include <iostream>
#include "Car.h"
using namespace std;

int main() 
{
    Car car1;
    car1.displayInfo();
    cout << endl;

    Car car2("Toyota", "Camry", 2024, 25000);
    car2.displayInfo();
    cout << endl;

    car1.setMake("Honda");
    car1.setModel("Civic");
    car1.setYear(2023);
    car1.setPrice(25000.0);
    car1.displayInfo();

    return 0;
}