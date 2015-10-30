#include<iostream>    // include the contents of iostream library and combine it with source code and sent the combination to the compiler
#include<stdio.h>     // include the contents of stdio.h library with source code so we can use printf() function and test for EOF condition
#include <ctype.h>    // include the content of ctype.h library with source code 
void main()             // header of main() function
{                 //beginning of main() function body
	using namespace std;
	char c; //declare a char variable called c without initializing it
	int othercharnum=0;
	int threenum=0;
	               // declare integer variables and initialize each and every one of them to the value zero

	printf("Enter input, include any alpha character, numeric character, newline character or space in any length. When you are ready to terminate, enter CTRL+Z.");
	// display the above onto screen

	
	c=getchar();    // get the first character

	while( c!=-1&& c!=26 && c!=4)       // test condition for carrying out while loop, ASCII code -1 is EOF
	{
		switch( c)                          // switch condition for the character c
	  {
		 
	 
	  case '3':
		  ++threenum;                            // if character is 3, increase the number of three counts by 1
		  break;
	 
	  default:
		  ++othercharnum;                           // if character is any other, increase the number of other character counts by 1
		}

		c=getchar();               // get one character at a time

		}

	if( threenum==0)
		printf("The number three is inputted zero times\n");
	else if( threenum==1)
		printf("The number three is inputted one time\n");
	else if( threenum==2)
		printf("The number three is inputted two times\n");
	else 
		printf("The number three is inputted more than two times\n");                     // use if-else conditions to print onto the screen how many times the number 3 was inputted
	system("PAUSE");

	
}