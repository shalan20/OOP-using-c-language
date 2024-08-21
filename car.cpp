#include "car.h"
int main()
{
	car c1;//استدعيت ال default constructor
	cout << "color = " << c1.getcolor() << endl;
	cout << "model = " << c1.getmodel() << endl;

	car c2('b',2023); //استدعيت ال constructor using parameters 
	cout << "color = " << c2.getcolor() << endl;
	cout << "model = " << c2.getmodel() << endl;
}