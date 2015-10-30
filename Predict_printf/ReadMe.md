In the following program various operators are used to assign a value to the variable x. In this example the string that is passed to printf() has the format specification %d. This means that a decimal will be printed in place of %d. This decimal is passed to printf() as the second argument. The first argument of printf() must be a string. In this example the second argument is the variable x. Predict what will be printed on screen (provide a code file with comments stating the output for each line).
/* Operators */
#include <stdio.h>
int main()
{
int x;
x=-3+4*5-6;
printf("x=%d\n", x);
x=3+4%5-6;
printf("x=%d\n", x);
x=-3*4%-6/5;
printf("x=%d\n", x);
x=(7+6)%5/2;
printf("x=%d\n", x);
return 0;
}