#include<iostream>  // include the preprocessor directive and the contents of iostream along with the source code
#include<stdio.h>  // include the contents of stdio along with the source code
void swap( int *, int *);
// prototype of the swap function, has two pointer-to-int arguements
void main()             //header of main() function
{                       // beginning of main() function body
	using namespace std;        //using directive makes the functions and objects of iostream accessible
	int i,j;                   //declare without initializing two integer variables, i and j
	printf("Enter two integers and I will swap their values : \n");          // print the message onto screen display
	scanf("%d %d",&i,&j);              // assign the two integers user inputted to the two integer variables we have declared

	swap(&i, &j);              //call the swap functions and pass the pointers of the two integer variables as arguements
	printf("After the swap : \n");                // print out the values of the two integer variables after the swap
	printf("%d %d\n", i, j);
	system("PAUSE");                    // pause the screen output from vanishing immediately and automatically after compilation and execution

}

void swap( int* a, int* b)                  //definition for the swap function, with two pointer-to-integer arguements
{
	int temp= *a;                        // declare an integer variable named temp and assign it the value of the first pointer arguement
	*a=*b;                              //swap the values of the two pointer-to-integer passed as arguements
	*b=temp;

}