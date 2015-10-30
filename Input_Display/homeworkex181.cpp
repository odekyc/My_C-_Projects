#include<iostream>    //include content of iostream file along with the source code and sent both for compilation
#include<stdio.h>      // include content of stdio.h file along with the source code and sent both for compilation
struct Article
	{
		int Articlenumber;
		int Quantity;
		char Description[20];                   //declare a structure type named Article with components( two int, one string with 20 characters)
	};
void Print( struct Article* pt);             //prototype for the Print() function, with a pointer-to-struct Article passedas arguement

void main()                                //header for main() function
{
	using namespace std;                  // the using namespace directory allows the contents of the iostream file to be used

	
	Article now ={ 16502, 31, "comforter"};             //initialize the struct type Article variable named now

	Print( &now);                     // call the Print() with the pointer to the struct Article variable called now passed as arguement

	system("PAUSE");                         //pause the screen output from immediately disappearing after compilation

}

void Print( struct Article* pt)                   //definition for the Print() function with a pointer-to-struct Article passed as arguement
{
	using namespace std;                                   // the using namespace directive allows the contents of iostream to be used
	printf("The article number is : %d\n", pt->Articlenumber);
	printf("The quantity of the article is : %d\n" ,pt->Quantity);
	printf("The description of the article is : %s\n", pt->Description);                 //print the components of struct Article variable now onto screen output
}
