#include"Point.h"
#include<iostream>
using namespace std;

void main()
{
	/*Point p(1.0, 1.0);
if (p==1.0) cout<<"Equal!"<<endl;
else cout<<"Not equal"<<endl;
does not compile because you need to 
use Point constructor with only
a single double arguement
Point p(double xandy) to implicitly convert
the 1.0 in if (p==1.0) to Point p(1.0) */
	Point p(1.0, 1.0);
	if (p==(Point)1.0) cout<<"Equal!"<<endl;          // test for the same thing except using explicit conversion
else cout<<"Not equal"<<endl;

system("PAUSE");
}