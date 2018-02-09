#ifndef GAZEL_H
#define GAZEL_H
#include<iostream>
#include<string>
#include"Vehicle.h"
#include"CalculateFuel.h"

using namespace std;

class Gazel :public Vehicle, public CalculateFuel{
public:
	Gazel();
	void defineQuantity();
};









#endif