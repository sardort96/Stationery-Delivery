#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include<string>

using namespace std;

class Vehicle{
protected:
	int quantityInStock;
	int numberOfPassengers;
public:
	Vehicle();
	virtual void defineQuantity() = 0;
	int getQuantity()const;
	int getPassengers()const;
	

};

#endif