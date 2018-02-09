/*/////////////////////////
/ Name: Assignment 3 //////
/ Author: Sardor //////////
*//////////////////////////

#include<iostream>
#include"Gazel.h"
#include"Damas.h"
#include"Nexia.h"
#include"Lorry.h"
#include"CalculateFuel.h"

using namespace std;


int main()
{
	Vehicle *ptr;
	cout << "1-Gazel\n2-Damas\n3-Nexia\n4-Lorry" << endl;
	cout << "Enter the car whose driver you want to  test:" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: 
		Gazel g;
		ptr = &g;
		g->defineQuantity();
		g.calculate();
		g.printInfo();
		break;
	case 2:
		Damas d;
		ptr = &d;
		d->defineQuantity();
		d.calculate();
		d.printInfo();
		break;
	case 3:
		Nexia n;
		ptr = &n;
		n->defineQuantity();
		n.calculate();
		n.printInfo();
		break;
	case 4:
		Lorry l;
		ptr = &l;
		l->defineQuantity();
		l.calculate();
		l.printInfo();
		break;
	default:
	{
			   cout << "No such option" << endl;
			   break;
	}
		
	}








	system("pause");
	return 0;
}
