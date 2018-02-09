#include<iostream>
#include<string>
#include"CalculateFuel.h"

using namespace std;


void CalculateFuel::fuelVol(){
	fuel_volume = total_fuel_price / fuel_price;
}
void CalculateFuel::factualMileage(){
	factual_mileage = mileage_after - mileage_before;
}

void CalculateFuel::calcMileage(){
	mileage = fuel_volume / fuel_expenditure * 100;
}
void CalculateFuel::calcRerun(){
	rerun = mileage - factual_mileage;
}

void CalculateFuel::ExtraFuel(){
	extra_fuel = rerun / 100 * fuel_expenditure;
}
void CalculateFuel::input(){
	cout << "Enter the expenditure of fuel for 100 kilometres: ";
	cin >> fuel_expenditure;
	cout << "Enter the tank volume of the car: ";
	cin >> tank_volume;
	cout << "Enter the price of the fuel(AI 95, 91, 80): ";
	cin >> fuel_price;
	cout << "Enter the total price of the fuel filled: ";
	cin >> total_fuel_price;
	cout << "Enter the mileage before being filled: ";
	cin >> mileage_before;
	cout << "Enter the mileage after the goods are delivered: ";
	cin >> mileage_after;
}
void CalculateFuel::calculate(){
	fuelVol();
	factualMileage();
	calcMileage();
	calcRerun();
	ExtraFuel();
}
void CalculateFuel::printInfo()const{
	cout << "Results of calculation" << endl;
	cout << "The vomule of filled fuel is " << fuel_volume << endl;
	cout << "Mileage is " << mileage << endl;
	cout << "Rerun is " << rerun << endl;
	cout << "Extra fuel is " << extra_fuel << endl;

}