#ifndef DAMAS_H
#define DAMAS_H
#include<iostream>
#include<string>
#include"Vehicle.h"
#include"CalculateFuel.h"

using namespace std;

class Damas :public Vehicle, public CalculateFuel{
public:
	Damas();
	void defineQuantity();
};











#endif