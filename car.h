#pragma once
#include<iostream>
using namespace std;
class car
{
private:
	char color;
	int model;
public:
	//constructor overloading first constructor
	car() //constructor instead of setter
	{
		color = 'r';
		model = 2019;
	}
	/* constructor using intialization list
	car():color('r'),model(2019)
	{
		cout << "the color and model are intialized";
	}*/


	// constructor  هدخله القيم فى ال main
	//constructor overloading second constructor
	car(char c, int m)
	{
		color = c;
		model = m;
	}
	char getcolor()
	{
		return color;
	}
	int  getmodel()
	{
		return model;
	}


};

