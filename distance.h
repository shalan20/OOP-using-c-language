#include<iostream>
using namespace std;
class distance
{
private:
	int feet;
	float inches;
public:
	distance()
	{
		feet = 0;
		inches = 0;
	}
	distance(int f, float i)
	{
		feet = f;
		inches = i;
	}
	void setdistance(int f, float i)
	{
		feet = f;
		inches = i;
	}
	void print()
	{
		cout << feet << endl;
		cout << inches << endl;
	}

};
