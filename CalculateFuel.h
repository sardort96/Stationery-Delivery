#ifndef CALCULATEFUEL_H
#define CALCULATEFUEL_H
#include<iostream>
#include<string>

using namespace std;

class CalculateFuel{
protected:
	double fuel_expenditure;
	double tank_volume;
	double fuel_price;
	double mileage_before;
	double mileage_after;
	double fuel_volume;
	double total_fuel_price;
	double mileage;
	double rerun;
	double factual_mileage;
	double extra_fuel;
public:
	void fuelVol();
	void factualMileage();
	void calcMileage();
	void calcRerun();
	void ExtraFuel();
	void input();
	void calculate();
	void printInfo()const;
#endif