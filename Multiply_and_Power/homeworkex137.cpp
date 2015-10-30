#include<iostream>  // a preprocessor directive that includes the contents of the iostream library in place of this line of code
void main()    // main() function header
{          //beginning of main() function body
    using namespace std;  //use namespace directive so that the contents and commands of the iostream library can be accessed and used
	int number;    //declare an integer variable called number
	int numbershift;        //declare an integer variable called n
	
	printf("Enter an integer number: ");   /* display the msg in double quotation onto the screen prompt */
	scanf("%d",&number);             // user input integer value would be assigned to the int number variable
	printf("Enter the number of places you want to shift the previously entered number to the left: ");     /* display the msg in double quotation onto the screen prompt */
	scanf("%d", &numbershift);     //user input integer value would be assigned to the int numbershift variable

	int number2=number<<numbershift;       // shift the value of number by the number of places as the numbershift value to the left

	printf("The integer number %d after being shifted to %d places to the left, results in the following value: %d\n", number, numbershift, number2);
	// display the msgs in the double quotation marks as well as the resulting value after the shift onto the screen prompt
	
	system("PAUSE"); // pause the screen prompt from disappearing right after compilation and execution of the source codes

}