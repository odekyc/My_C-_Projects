/* Calculate the length of a string */
#include <stdio.h>
#include<iostream>
#define MAXLINE 30
// String lenght declaration
int Length(char str[]);
int main()
{
	using namespace std;
char string[MAXLINE+1]; // Line of maxium 30 chars + \0
char c; // The input character
int i=0; // The counter
// Print intro text
printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);
// Get the characters
c=getchar();     
while ( c!=-1 && c != 26 && i<MAXLINE && c != 4)
{
// Append entered character to string
string[i++]=(char)c;
}
string[i]='\0'; // String must be closed with \0
printf("String length is %d\n", Length(string));
system("PAUSE");

return 0;
}
/* Implement the Length() function here */

int Length( char str[])
{
	using namespace std;
	int len=1;          // initialize the len variable to the value of 1
	
	char c;

	c=getchar();    //get the first character in the string

	while(c!=-1 && c!= 26 && c != 4)               //the way to test for EOF on my operating system
	{  
	len++;                                          // string length increment by 1 if tested and not end of file
	
	c=getchar();                                  // get another character
	}
	
	return len;                      // return the len variable to be the counted length of the string
}