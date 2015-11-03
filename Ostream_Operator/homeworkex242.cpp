#include "Point.h"
#include"Line.h"
#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;

void main()
{
	Point D(1.5, 9.87);              // call constructor to create Point D
	cout << "cout Point using overloaded << : " << D << endl;
   string temp=D.ToString();             // create a string called temp using D.ToString();
 
    cout<<temp<<endl;                    // output the temp string using the << operator we created

	
	Point start(2.3, 8.7);
	Point end(4.5, 98);          // call constructor to create two points called start and end

	Line L(start, end);            // using start and end points as arguements, call constructor to create a line variable named L
	cout << "cout Line using overloaded << : " << L << endl;

	string temp2=L.ToString();           // create a string variable named temp2 using L.ToString();
	cout<< temp2<<endl;                  // output the temp2 string using the << operator we created

	Circle M(3.0);    //create a Circle called M with radius=3.0
	cout <<"cout Circle using overloaded << operator : "<< M;   

	system("PAUSE");

}