#include<iostream>          //include the content of iostream library along with source code
#include<stdio.h>            // include the content of stdio.h header file along with source code

using namespace std;                     // using namespace so that you can use the contents of iostream library in this source code file
extern int ia;                          // user integer ia variable declared in main.cpp
void print ()                       //  print() definition
{
	
	int result= ia*2;                   //declare an integer variable calle result and initialize its value to be the value of variable ia multiplied by 2
	printf("%d\n",result);                  //display the value of variable result onto screen 
	system("PAUSE");                     // to pause the screen output display from immediately and automatically disappearing

}