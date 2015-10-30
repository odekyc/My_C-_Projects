#include<iostream>  // a preprocessor directive, include the iostream 
//library in place of this line of code and sent both the contents of this library and the source code to the compiler

void main()  // main() function header
{    // beginning of the main() function body
	using namespace std; // the using directive is able to access the contents of the iostream library
	int i;  //declare an integer variable i 
	printf("Enter a random negative integer number and I should return a resulting integer after shifting the input number 2 places to the right");  //display the msg between the double quotation marks onto screen prompt
	scanf("%d",&i);  // user inputted integer is assigned to integer i. 
	i=i>>2;   // integer i is shifted two places to the right
	printf("The resulting value after the shift is: %d\n", i);    // display the integer value of i onto the screen prompt
	

	if (i < 0)     // use the if-else conditional statement to determine whether it was a logical shift or an arithmetic shift,
		//and print the determined result( logical shift or arithmetic shift onto the screen prompt)
{
printf("Negative, a 1 was inserted left, so it is logical shift\n");
}
else
{
printf("Positive, a 0 was inserted left, so it is arithmetic shift\n");
	}
	system("PAUSE");  // pause the screen prompt from disappearing after compilation and execution of the source code
}