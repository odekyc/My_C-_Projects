#include<iostream>         //include the content of iostream library along with source code 
#include<stdio.h>            // include the content of stdio.h header file along with source code


using namespace std;                   // using namespace so that you can use the contents of iostream library in this source code file
int ia;                               // declare a global integer variable called ia
void print();                 //prototype for print() function
void main()                  //header for main()
{
	ia=5;                 //assign the value of 5 to integer variable ia
	print();             //calls print() function located in print.cpp source code file
}
