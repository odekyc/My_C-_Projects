#include<stdio.h>                //include the content of stdio.h along with the source code and sent them both for compilation
#include<iostream>              //include the content of iostream along with the source code and sent them both for compilation
#include<string>                //include the content of string along with the source code and sent them both for compilation
void main()
{
	using namespace std;     // using namespace directive 
	
	char c;             //declare a character variable named c
	int i=0;            // declare an integer variable named i and initialize it to the value of 0

	printf("Input any number of characters, then enter CTRL+A to terminate \n");        // print the message in the double quotation onto the screen output to ask user for input
	c=getchar();              // get the first character
	while( c != 1 )           //while the last character you get is not CTRL+A
	{
		putchar(c);          // display the last character you get onto screen output
		
		
		i++;                //increment the value of i by 1
		c=getchar();        // get another character 
		
	}

	printf("\n");         // print the newline character onto screen 
	
	
	system("PAUSE");     //pause the screen output to prevent it from vanishing immediately after screen output compilation
}
