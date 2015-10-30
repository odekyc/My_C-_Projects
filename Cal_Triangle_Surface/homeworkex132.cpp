#include<iostream>  // a preprocessor directive, includes the contents of iostream C++ library in the place of this line of code, and 
//creates a composite file of the contents of this library with the source code and sent it to the compiler
int main()     //
{    // beginning of the main() function
	using namespace std;     // the using directive allows you to access and make available the contents of iostream library for use
	int base;     // declare an integer variable named base without initialization
	int height;          // declare an integer variable named height without initialization
	printf ("Enter the base of a triangle with one 90 degree angle : ");  // displays this msg inside double quotation marks on the screen prompt
	scanf("%d", &base);   // the value the user inputs will be assigned to the variable base
	printf("Enter the height of a triangle with one 90 degree angle : ");    // displays this msg inside double quotation marks on the screen prompt
	scanf("%d", &height);  // the value the user inputs will be assigned to the variable height
	double surfacearea=0.5*base*height;   //declare a double variable named surfacearea and initializes its value
	printf("The surface area of the triangle( with one 90 degree angle) in this exercise is: ");
	printf("%f\n",surfacearea);  // displays the message inside the
	//double quotation marks onto the screen prompt as well as the previously calculated value of surfacearea onto the screen prompt

	system("PAUSE");   // use this line of code to pause the screen prompt from vanishing after the compilers finishes compiling all the source codes

	return 0;   //returns the integer 0 to end the main() function
}