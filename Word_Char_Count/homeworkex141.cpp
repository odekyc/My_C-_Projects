#include<iostream> // a preprocessor directive, includes the content of iostream library in the source code of this file and sent both for compilation
#include <stdio.h>
#include <ctype.h>
#include<string>
#include<cstring>
void main() //header of main() function
{  //beginning of the main() function body
   using namespace std;   // the using namespace directive is placed here so that the contents of the iostream library can be used and accessed
   char ch[150];     // declare a character array of length 150 characters( including the newline character)
   int characternum=0;
   int newlinecharnum=0;   // declare integer variables called wordnum, newlinecharnum, and characternum, and spacenum AND initialize each and every one of them to the value 0
   int wordnum=0;
   int spacenum=0;
   int n=1;
   
   printf("Enter any input, you can enter space, newline character, alpha character, or numeric digits in any number, and the input should total 150 characters only(including newline and space)! When you reach end of your input, enter CTRL + D to terminate input");
   //display this message onto the screen prompt

  

   cin.get(ch[0]);;  // get the first character from the character array you just entered
  
   if(ch[0]!=4)  //ASCII value 4 refers to the termination input CTRL + D, carry out and execute the while loop when the character you get doesn't equal to CTRL + D
   {
	  
if (ch[0] ==' ' )   // if the first character is a space
{ 
++spacenum;          // number of space count +1

	   }
else if (ch[0] == '\n')  //if the first character is a newline character
{
++newlinecharnum;     // number of newline character count +1
}
else if (ch[0]!=' ' && ch[0]!= '\n ') // if you get a numeric or alpha character
{
 ++characternum;    // the integer variable characternum is increased by 1
}
else
{ 
	printf("number of spaces in the input is 0");
   printf("number of words in the input is 0");
   printf("number of characters in the input is 0");
   printf("number of newline characters in the input is 0");               // if you didn't enter any input and just entered CTRL + D, this is the message printed onto the screen 

   }

  // get a character, the first character in your input
cin.get(ch[n]);
   while(ch[n]!=4)  //ASCII value 4 refers to the termination input CTRL + D, carry out and execute the while loop when the character you get doesn't equal to CTRL + D
   {
	  
 if (ch[n] ==' ' )   // if ch[n] is a space
{ 
++spacenum;             // number of space count incremented by 1
if( ch[n-1]!=' ')         // if ch[n] is a space but ch[n-1] is not a space
{
++wordnum;                // number of word count incremented by 1
}
	   }
else if (ch[n] == '\n')            // if ch[n] is a newline character
{
++newlinecharnum;                 // number of newline character count increased by 1

if(ch[n-1]!=' ')
{
++wordnum;
}
 }
else
{
	++characternum;                 // if ch[n] is not a newline character nor a space, number of character count incremented by 1
}

++n;
 cin.get(ch[n]);                          // increase n by 1, then get the next character


   }

  if( ch[n]==4 && ch[n-1]!=' ' && ch[n-1]!='\n')
  { 
	  wordnum+=1;                                   // in case when you didn't enter the newline character before the CTRL+D
  } 
  
                      

   printf("number of spaces in the input is: %d \n ", spacenum);
   printf("number of words in the input is: %d \n ", wordnum);
   printf("number of characters in the input is: %d \n ", characternum);
   printf("number of newline characters in the input is: %d \n ", newlinecharnum);                        // display onto screen the number of words, characters, spaces, and newline characters
   system("PAUSE");

}

}