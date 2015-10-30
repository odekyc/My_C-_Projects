#include<iostream>  // include the content of the iostream library and combine it with source code to sent to compiler
#include<stdio.h>   // include the content of stdio.h library so that we can use the printf() function
void main()      //main() function header
{                  // beginning of main() function body

	
	double Celsius=0;         // declare double variable Celsius and initializing it to 0
	double Fahrenheit;         // declare double variable Fahrenheit without initializing it

	for ( Celsius=0; Celsius <= 19; Celsius++)                    // for loop, starting Celsius on a value of 0,
		//set the test condition to Celsius <= 19, and increment Celsius by 1 with every round of loop
	{
		Fahrenheit= Celsius * ( 9.0 /5.0) + 32;                   //math operation formula for calculating Fahrenhei value from Celsius

		printf(" Celsius : %f", Celsius);
		printf(" Fahrenheit : %f \n", Fahrenheit);                     //print the value of Fahrenheit and Celsius on two respective columns

	}

	system("PAUSE");                          // pause the screen from vanishing automatically after compilation and execution of source code
}