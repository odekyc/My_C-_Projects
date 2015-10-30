#include<iostream>       // include the contents of iostream in the source file and sent both to compilation
#include<stdio.h>        // include the contents of stdio.h in the source file and sent both to compilation

void DayName(int i)                        //Here we declare and define the function DayName()
{
    char *DayName[7]={"Sunday", "Monday" ,"Tuesday","Wednesday","Thursday","Friday","Saturday"};
    //declare a string and initializes its value
	printf("It is day %s\n", DayName[i]);
	
    //return string pointer *DayName[i]
}
 
int main()
{
	using namespace std;
    int i;   //declare without initialize an integer variable named i
 
    printf("Enter a number (1-7) representing for the day of the week:\n");        // print the msg inside double quotations onto screen using printf()
    scanf_s("%d", &i);    // get the value of integer i and assigns it to %d
	DayName(i - 1);
           // C style code for printing using printf(), will print the value of i in the place of % for %d, and the string for DayName(i-1) in % for %s
	system("PAUSE");
}