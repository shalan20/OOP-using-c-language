#include "rectangle.h"
#include<iostream>
using namespace std;
int main()
{
	rectangle rec;
	rec.setlength(3.3);
	rec.setwidth(4.5);
	cout << "Length = " << rec.getlength();
}
