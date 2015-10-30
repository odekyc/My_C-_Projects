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
   int n=0;
   
   printf("Enter any input, you can enter space, newline character, alpha character, or numeric digits in any number, and the input should total 150 characters only(including newline and space)! When you reach end of your input, enter CTRL + D to terminate input");
   //display this message onto the screen prompt

  cin.get(ch[n]);
  // need to get the first character in order to enter do-while loop
	 


 
  while(ch[n]!=4)
  {
	  switch( ch[n])
	  {
		 
	  case ' ':
		  ++spacenum;
		  if(ch[n-1]!=' '&&n!=0)
		  {
			  ++wordnum;
		  }

		  break;
	  case '\n':
		  ++newlinecharnum;
		  
			   if(ch[n-1]!=' '&& ch[n-2]!=' ' && n!=0)
		  {
		  ++wordnum;
			   }
		  break;
	  default:
		  ++characternum;
	  }

	
	
	
         ++n;           // increase n by 1
		 cin.get(ch[n]);         // get the next character


   } 

   if( ch[n-1]!='\n'&& n!=0 && ch[n-1]!=' ' )             // need to account the situation when, before the user input CTRL+4, the user didn't enter a newline character at ch[n-1], and if ch[n-1] is not a space, need to increase word number count by 1
   {
	   wordnum+=1;
   }

  
   printf("number of spaces in the input is: %d \n ", spacenum);
   printf("number of words in the input is: %d \n ", wordnum);
   printf("number of characters in the input is: %d \n ", characternum);
   printf("number of newline characters in the input is: %d \n ", newlinecharnum);                        // display onto screen the number of words, characters, spaces, and newline characters
   system("PAUSE");

}

