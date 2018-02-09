#ifndef NEXIA_H
#define NEXIA_H
#include<iostream>

#include"Vehicle.h"
#include"CalculateFuel.h"

using namespace std;

class Nexia :public Vehicle, public CalculateFuel{
public:
	Nexia();
	void defineQuantity();
};









#endif