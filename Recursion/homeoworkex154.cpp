#include<iostream>  //include the iostream library content along with the source code, so cout can be used
#include<stdio.h>      //include the stdio library content along with source code, so putchar() function can be used
void printnumber(int);   //printnumber() function prototype
void main()            //header of main() function
{                        //beginning of main() body
	using namespace std;           // using namespace diretory so the objects and functions of iostream library can be used in main()

	int input;         // declare an integer variable called input without initialization
	printf("Enter any integer, can be positive or negative : ");            //print this message onto screen to ask user for integer input
	scanf("%d",&input);                              // user inputted integer is assigned to variable input
	printnumber(input);                       //call printnumber() function and sent input variable as arguement
	printf("\n");                       // use this so that there is a last line after the screen output
	system("PAUSE");                            // pause system screen display to prevent it from immediately and automatically vanishing after execution and compilation of code
}

void printnumber(int n)                           //printnumber() function definition
{
    if (n < 0) {                                  // in case the number user entered in main() is a negative number, need to print the negative sign onto screen
        putchar('-');
        n = -n;                                    // if the user entered a negative number, adjust the negative input integer into a positive number
    }
    if (n / 10 != 0)                              // in case the now positive number is greater than 10, by calling itself(recursing) printnumber(),
		//able to display every single digit by first reducing all the digit at or more than the tens' places into the ones' place
        printnumber(n / 10);
    putchar((n % 10) + '0');                    // use putchar() to display every single digit of the number, need to add '0' inside the parenthesis to indicate you are trying to print a number, not the ASCII code
}