#include<iostream>    // include the contents of iostream library and combine it with source code and sent the combination to the compiler
#include<stdio.h>     // include the contents of stdio.h library with source code so we can use printf() function and test for EOF condition
#include <ctype.h>    // include the content of ctype.h library with source code 
void main()             // header of main() function
{                 //beginning of main() function body
	using namespace std;
	char c; //declare a char variable called c without initializing it
	int othercharnum=0;
	int zeronum=0;
	int onenum=0;
	int twonum=0;
	int threenum=0;
	int fournum=0;       // declare integer variables and initialize each and every one of them to the value zero

	printf("Enter input, include any alpha character, numeric character, newline character or space in any length. When you are ready to terminate, enter CTRL+Z.");
	// display the above onto screen

	
	c=getchar();    // get the first character

	while( c!=-1&& c!=26 && c!=4)       // test condition for carrying out while loop, ASCII code -1 is EOF
	{
		switch( c)                          // switch condition for the character c
	  {
		 
	  case '0':
		 ++zeronum;                        // if character is 0, increase the number of zero counts by 1
		  break;
	  case '1':
		  ++onenum;                          // if character is 1, increase the number of one counts by 1
		   break;
	  case '2':
		  ++twonum;                            // if character is 2, increase the number of two counts by 1
		  break;
	  case '3':
		  ++threenum;                            // if character is 3, increase the number of three counts by 1
		  break;
	  case '4':
		  ++fournum;                              // if character is 4, increase the number of four counts by 1
		  break;
	  default:
		  ++othercharnum;                           // if character is any other, increase the number of other character counts by 1
		}

		c=getchar();               // get one character at a time

		}

		printf("The number of 0s that the user has inputed: %d\n",zeronum);
		printf("The number of 1s that the user has inputed: %d\n", onenum);
		printf("The number of 2s that the user has inputed: %d\n", twonum);
		printf("The number of 3s that the user has inputed: %d\n", threenum);
		printf("The number of 4s that the user has inputed: %d\n", fournum);                 // display the number counts of each of the numbers 0-4 that was inputted by the user
	system("PAUSE");

	
}