#include "Car.h"
#include <iostream>
using namespace std;

Car::Car() : make("Unknown"), model("Unknown"), year(0), price(0.0) {}

Car::Car(const string& make, const string& model, int year, double price) : make(make), model(model), year(year), price(price) {}

Car::~Car()
{
    cout << "Destructor called for Car: " << make << " " << model << endl;
}

string Car::getMake() const { return make; }
string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getPrice() const { return price; }
void Car::setMake(const string& make) { this->make = make; }
void Car::setModel(const string& model) { this->model = model; }
void Car::setYear(int year) { this->year = year; }
void Car::setPrice(double price) { this->price = price; }

void Car::displayInfo() const
{
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Price: $" << price << endl;
}