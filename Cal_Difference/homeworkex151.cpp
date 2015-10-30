#include<iostream>   // include the content of the iostream library along with the source code and sent both for compilation
#include<stdio.h>    // include the content of the stdio.h library along with the source code so you can use the printf() function
int myminus( int, int );           // prototype for the minus function that returns an integer and that uses two integer arguements


int myminus(int a, int b)                                    // the minus function, both the larger as well as the smaller integers the user inputted were passed to this function
{
	return a - b;                // return the difference between these two numbers to the function
}



void main()
{
	using namespace std;        //this using namespace directive allows the objects and functions of iostream to be accessed and used in our source code
	int difference;             // declare an integer variable called difference without initializing its value
	int larger, smaller;                   // declare two integer variables called larger and smaller without initializing their values
	printf("Enter a larger integer : ");
	scanf("%d", &larger);
	printf("Enter a smaller integer : ");                // display the messages asking for user to input these two variables 
	scanf("%d", &smaller);
	difference= myminus (larger, smaller);                       // call the minus function to get the difference between these two variables

	printf("The difference between these two numbers are: %d\n",difference);              // display the difference of these two variables onto screen
    system("PAUSE");
}

