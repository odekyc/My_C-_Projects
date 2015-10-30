#include "Defs.h"
#include<iostream>
using namespace std;

void main()
{
	int a = 4, b = 7, c = 12;   //declare and initialize 3 integers a,b, c
	printf(" a = 4, b = 7, c = 12!\n");  //print this msg onto screen 
	printf("Max2(a,b) : %d\n", Max2(a, b));   //call the Max2 Macro and output it onto screen
	printf("Max3(a,b,c) : %d\n", Max3(a, b,c));   //call the Max3 Macro and output it onto screen 
	system("PAUSE");
}