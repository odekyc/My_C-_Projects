/* Predict what will be printed on the screen */
#include <stdio.h>      // include the content of stdio.h and combine it with the source file to sent to compilation
#include<iostream>
#define PRD(a) printf("%d", (a) ) // Print decimal
#define NL printf("\n"); // Print new line
// Create and initialse array
int a[]={0, 1, 2, 3, 4};    
int main()  //header file for main() function
{
	using namespace std;
int i;             // declare an integer 
int* p;            //declare a pointer-to-integer
for (i=0; i<=4; i++) PRD(a[i]); // 1-PRD(a[i]) prints, on a single line, 0 1 2 3 4, then NL prints \n( next line)
NL;
for (p=&a[0]; p<=&a[4]; p++) PRD(*p); // 2- *p is the value of pointer-to-integer p. one a single line, 0 1 2 3 4 are printed. while the two NLs prints two \n \n(double newlines)
NL;
NL;
for (p=&a[0], i=0; i<=4; i++) PRD(p[i]); // 3-p[i] is the pointer's value. on a single line, prints 5 values 0 1 2 3 4. and one NL prints one \n ( one newline)
NL;
for (p=a, i=0; p+i<=a+4; p++, i++) PRD(*(p+i)); // 4 on a single line prints 0, 2, 4 . p(pointer) is assigned &a[0]. for every round of the loop p(pointer) is incremented by 1, and i(number) is incremented by 1 also. so *(p+i) is incremented by 2 in every round of loop, which means the pointer p is moved by 2* # bytes for the space for storing an integer. then two NL means prints two newline characters. 
NL;
NL;
for (p=a+4; p>=a; p--) PRD(*p); // 5- a is a pointer address &a[0], a+4 is a pointer &a[4], *p is the value of pointer(first one is &a[4]), so on a single line prints the five int values backward 4 3 2 1 0, then the one NL means prints one newline character. 
NL;
for (p=a+4, i=0; i<=4; i++) PRD(p[-i]); // 6- p[-i] is the pointer's value at *(p-i), since i begins at value 0 and increment by one value in every round of loop until it reaches the value 4, p[-i] will print the 5 values backward 4 3 2 1 0. 
NL;
for (p=a+4; p>=a; p--) PRD(a[p-a]); // 7- p is a value in this case and is set to p=a+4 initially.p is decremented by 1 value in every round of loop(p--). p cannot be less than a and p's smallest value is equal to a, and a[p-a] is the value of the integer string a[] at position p-a, so this would output the 5 values in the string a[] backward 4 3 2 1 0. 
NL;

system("PAUSE");
return 0;
}