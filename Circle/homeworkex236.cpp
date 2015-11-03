#include "distanceandpoint.h"
#include"Circle.h"

void main()
{
	Circle mycircle( 2.63);    //creates a Circle variable with radius=2.63

	Point central(2.6,7.89);    //creates a Point variable called central with x-coordinate 2.6 and y-coordinate 7.89

	mycircle.CentralPoint(central);     //set central as the central point of mycircle

	string mine=mycircle.ToString();     //initialize a string variable called mine mycircle.ToString();

	cout<<mine<<endl;    //cout onto screen mine string

	system("PAUSE");
}