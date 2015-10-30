/* Assignment operators */
#include <stdio.h>   // include the contents of stdio.h so that C++ math operations can be performed
#include<iostream>
int main()   //main() function header
{   // beginning of function main() body
	using namespace std;
int x=2;  //initializes integer variable x to the value 2
int y;  //declares integer variable y
int z;    //declares integer variable z
x*=3+2;  // x=x*(3+2); x=2*(3+2)=10 since * has higher order of operation than =
printf("x=%d\n", x);   //prints 10, the value of x, onto the screen prompt in place of where % is located
x*=y=z=4;           // x=x*4=10*4=40  and assign the value 40 to y as well as z since * has the higher order of operation than = in this case
printf("x=%d\n", x);   //prints 40, the value of x, onto the screen prompt in place of where % is located
x=y==z;   // y==z, as a true( value=1) expression is evaluated first since it has higher order of operation than the assignment operator = , 
// then x is assigned the value=1(true)
printf("x=%d\n", x);    //prints 1, the value of x, onto the screen prompt in place of where % is located
system("PAUSE");      
return 0;
}