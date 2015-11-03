 #include "Point.h"
#include <iostream>
using namespace std;
#include< string>

void main()

{
	const Point z1(-23.0, 5.3);           // use one of the constructor to create Point variables z1 and z2
	Point z2(2.0, 3.0);
	Point z3=z1;               // create Point z3 and use assignment operator to assign it the value of z1
	cout<<"Point z3 is assigned the value of z1"<<endl;
	z3.ToString();
	bool ifequal=(z3==z1);            // test using a bool variable if Point variables z3==z1 now
	cout<<"The bool value will return 1 if z3 is equal to z1, else return 0. At this stage, bool value : "<<endl;
	cout<< ifequal<<endl;                 

	z3 *=3.6;                             
	cout<<"Point z3 *=3.6 : "<<endl;          // use the *= operator we created
	z3.ToString();
	bool ifequal2=(z3==z1);                 // test using a bool variable if Point variables z3==z1 now

    cout<<"The bool value will return 1 if z3 is equal to z1, else return 0. At this stage, bool value : "<<endl;
	cout<< ifequal2<<endl;
	Point z4= -z1;                //create a Point variable named z4 and using the - operator we created to negate its coordinate
	cout<<"The Point variable z4, which is z1 negated, has the following coordinates:"<<endl;
	z4.ToString();                 // call the ToString() function of z4
	 
	Point z5= z1+z2;            //create a Point variable named z5 and using the + operator we created 

	cout<<"The Point variable z5, which is the additive result of z1 and z2, has the coordinates:"<<endl;
	z5.ToString();               // call the ToString() function of z5

	Point z6= z1*5.9;                 //create a Point variable named z6 and using the * operator we created 
	cout<<" The Point variable z6, which is the product of z1 multiplied by the factor 5.9, has the coordinates:"<<endl;
	z6.ToString();                  // call the ToString() function of z6

    
	system("PAUSE");


}
