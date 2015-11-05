#include<iostream>
#include"Point.h"
#include"Array.h"
using namespace std;

void main()
{
	Array m[10];        //declare an array of 10 Points 
	double tempx, tempy;   // declare two double number as the x and y coordinate of the first Point element in the array
	cout<<"Enter the x-coordinate for the first element of your Point array, can be an integer or a number with decimals. For every next element of your array the value of the x-coordinate of that element will increment by 9.4"<<endl;
	cin>>tempx;     // get the first Point element's x-coordinate from the user
	cout<<"Enter the y-coordinate for the first element of your Point array, can be an integer or a number with decimals. For every next element of your array the value of the y-coordinate of that element will increment by 7.3"<<endl;
	cin>>tempy;          // get the first Point element's y-coordinate from the user
	try        // try block to test for exceptions in our code
	{
		for(int i=0; i<=11; i++)                  //for loop that would loop for 12 times
		{
			

	m[i].SetElement(tempx, tempy);         // call the SetElement member function for m[i]

	m[i].GetElement();         // call the GetElement member function for m[i]
		}
	}

	catch ( int err)        // if catched an exception
	{
		if (err == -1) cout<<"index out of bound"<<endl;           // print onto the screen index out of bound
	}

	catch(...)      // if any other exception is caught that is different from the above out of bound exception
	{
		cout<<"an unhandled exception has occured"<<endl;       //print an unhandled exception has occured
	}



	system("PAUSE");



}