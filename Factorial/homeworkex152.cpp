#include<iostream>      // include the content of the iostream library to the source code and sent both for compilation
int factorial(int);    // prototype for the factorial function, it has an integer arguement and returns an integer number
void main()                     //header for the main() function
{                             //beginning of the main() function body
	using namespace std;       // the using namespace directive is placed here so that the functions as well as the objects for the iostream library can be accessed and used by the user
	int number;              //declares an integer variable named number without initializing it
	printf("Enter any number that you want to find factorial for : ");     //display this message onto screen to ask the user for input
	scanf("%d", &number);           // the user's input would be assigned to this variable called number
	long int result=1;              // declares the long integer variable called result and initializing it to the value of 1

	for(int i=1; i<=number; i++)        // create a for loop that will test whether the variable i, initialized to the value 1, is <= the user entered input number. if it is, then will continue another round and increase i by 1 in each round
	{
		result*= factorial(i);            // calculate the factorial of the user entered number by calling and multiplying the factorial function in this for loop
	}                                     // assign the calculated factorial value to the long integer variable result
	printf("The factorial for the number you just input is : %d\n", result);   //displays the factorial of the user input number onto screen

	system("PAUSE");              // PAUSE the screen display from vanishing immediately after compilation and execution of the source code
}

int factorial( int number)            // the user entered number is passed as an arguement to the factorial function, the function doesn't do anything except return the arguement value to itself
{
	
	return number;
}