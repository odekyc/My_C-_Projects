Predict what the following program prints on screen (provide a code file with comments stating the output for each line).
/* Conditional expressions */
#include <stdio.h>
int main()
{
int x=1;
int y=1;
int z=1;
x+=y+=x;
printf("%d\n\n", (x<y)?y:x); // Number 1
printf("%d\n", (x<y)?x++:y++); // Number 2
printf("%d\n", x); // Number 3
printf("%d\n", y); // Number 4
return 0;
}