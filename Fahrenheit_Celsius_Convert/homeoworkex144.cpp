#include <iostream>
#include <stdio.h>   // include the stdio.h library contents along with the source code, makes printf() available


void main()  //header for main function
{        //beginning of main() function body
	using namespace std;
	// using namespace directive allows for the compiler to use the objects in the iostream library
	
	double Fahstart=0.0;
	double Fahend=300.0;
	double Celsius;         // declare 3 double variables without initializing them



	

	while (Fahstart<=Fahend)                // carry out the loop if Fahstart<=Fahend else exit loop
	{
		
		Celsius= (5.0/9.0) * (Fahstart -32);             //operation used to calculate Celsius value

		printf("Fahrenheit : %f    ",Fahstart);              // print the value of Fahrenheit and Celsius onto screen
		printf("Celsius : %10.1f\n", Celsius);  
		Fahstart+=20; 
	}
	
	system("PAUSE");                              // pause the screen display from vanishing automatically after compilation and execution of source code

}
