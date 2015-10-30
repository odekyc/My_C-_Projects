#include<stdio.h> //also called the C-Standard Input and Output Library, used to perform input and output operations in C++
#include<iostream>// header that defines the standard input and output objects, such as the ostream and istream object
int main() //header of main() function
{          // beginning of main() function body
	
int x; // declare a variable named x without initializing it 
x=-3+4*5-6;  /* assign the value of x to -3+4*5-6, note that 4*5 has the highest level of order of operation so it is operated first,
			 then due to left to right associativity, -3 is added to 4*5=20, and then the resulting value is then added to -6 */
printf("x=%d\n", x); // calling printf() will display the value of x, calculated from the operation above to be 11, in the place of %
x=3+4%5-6;   // since 4%5 has the highest order of operation, and it is calculated to be 4. then due to left to right associativity, 3 is added to 4 first, then 6 is subtracted from the resultant value, and the final result is calculated to be 1.
printf("x=%d\n", x);// calling printf() will display the value of x, calculated from the operation above to be 1, in the place of %
x=-3*4%-6/5;  // * and % and / has the same priority in terms of order of operation, and they all have left to right associativity, so -3*4= -12, -12%-6=0, 0/5=0, the result value is 0.
printf("x=%d\n", x);    // calling printf() will display the value of x, calculated from the operation above to be 0, in the place of %
x=(7+6)%5/2;             //parenthesis () has the highest order of operation, so (7+6)=13, 13%5=3, and 3/2=1, so the end result value = 1
printf("x=%d\n", x);  // calling printf() will display the value of x, calculated from the operation above to be 1, in the place of %
system("PAUSE");   // use this last line of code so that the displaying screen will not vanish automatically after the compiler carried out the last line of code printf("x=%d\n", x);

return 0;  //return the integer 0( return type of main function) to end the main function
}