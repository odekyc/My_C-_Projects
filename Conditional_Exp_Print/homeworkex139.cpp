/* Conditional expressions */
#include <stdio.h>   //  include the contents of stdio.h library so that C++ math operations can be performed
#include<iostream>
int main()    //header for the main() function
{   //the beginning of the main() body
int x=1;  //initializes integer x to the value 1
int y=1;    //initializes integer y to the value 1
int z=1;      //initializes integer z to the value 1
x+=y+=x;   // x=x+y=1+1=2; y=y+x=1+2=3
printf("%d\n\n", (x<y)?y:x); // (x<y)=(2<3) evaluates to true, so y( value=3) is printed onto the screen prompt
printf("%d\n", (x<y)?x++:y++); // (x<y)=(2<3) evaluates to true, so x++ is implemented, while y++ is not implemented, but x++, since it has
//post-fix ++, so at this stage the value of x is not changed is is equal to 2, which is the value printed onto screen prompt
printf("%d\n", x); // at this stage, the value of x is already increased by 1, so x=3, the value printed onto screen
printf("%d\n", y); // since y++ was not implemented, the value of y remains at 3, and it is the value printed onto screen 

system("PAUSE");

return 0;
}