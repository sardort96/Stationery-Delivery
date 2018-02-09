#include<iostream>
#include<string>
#include"Vehicle.h"

using namespace std;


int Vehicle::getQuantity()const{
	return quantityInStock;
}
int Vehicle::getPassengers()const{
	return numberOfPassengers;
}