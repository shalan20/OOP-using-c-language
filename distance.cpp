#include "distance.h"
int main()
{
	distance d1;
	distance d2(2, 3.4);
	distance d3(d2);//default copy constructor: i took a copy from d2 and put it in d3
	                
	d3.print();
	d3.setdistance(7, 4.5);
	distance d4 = d3;//default copy constructor: i took a copy from d3 and put it in d4
	                
	d4.print();
}
