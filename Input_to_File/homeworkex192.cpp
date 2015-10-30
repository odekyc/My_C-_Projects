
#include<stdio.h>                //include the content of stdio.h along with the source code and sent them both for compilation
#include<string>                //include the content of string along with the source code and sent them both for compilation
#include <iostream>
void main()
{
	FILE* fp;
    fp = fopen("homeworkex192.txt", "w");
	
	char c;             //declare a character variable named c
	int i=0;            // declare an integer variable named i and initialize it to the value of 0

	printf( "Input any number of characters, then enter CTRL+A to terminate \n");        // print the message in the double quotation onto the screen output to ask user for input
	c=getchar();              // get the first character
	while( c != 1 )           //while the last character you get is not CTRL+A
	{
		fputc(c, fp);          // display the last character you get onto screen output
		
		
		i++;                //increment the value of i by 1
		c=getchar();        // get another character 
		
	}

	fprintf(fp, "\n");         // print the newline character onto screen 
	
	
	fclose(fp);

	system("PAUSE");
}