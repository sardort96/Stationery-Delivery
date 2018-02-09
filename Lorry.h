#ifndef LORRY_H
#define LORRY_H
#include<iostream>
#include<string>
#include"Vehicle.h"

#include"CalculateFuel.h"

using namespace std;

class Lorry :public Vehicle, public CalculateFuel{
public:
	Lorry();
	void defineQuantity();

};











#endif