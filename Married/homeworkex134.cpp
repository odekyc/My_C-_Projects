#include<iostream> /* a preprocessor directive, include the iostream library, iostream library is a standard C++ library, it provides for file <input/output> access for execution of file,
 and access to ostream and istream objects and functions. it means the contents of the iostream library is sent along with your source code to the compiler. more specifically, the content of the 
 iostream library replaces where the line of code #include<iostream> is located, a composite of the contents of the iostream library as well as the source code is then sent to the compiler*/
void main() //header of main function, instead of int main() we use void main() in this case so no return 0; at the end of the main() function
{   // start of main function body
	using namespace std; //the using directive uses the namespace directive to make the definitions in iostream available to your program
int married; // declare an integer variable named married
cout<<"Enter your marriage status, enter 0 if you are not married, enter a non-zero number(any number) if you are indeed married"<<endl;  // display the message in double quotations "" on the screen 

  scanf("%d", &married);  // input from the user is directed into the integer variable married



bool status=(married!=0)? 1:0;   // declare a bool variable named status and initialize its value to 1 if the value of married does not equal to 0, or else initialize the value of status to 0

printf("Your marriage status is(0 means not married, 1 means married):%d \n", status);  // display the message in the double quotation mark onto the screen prompt using the printf() function call, the bool variable status( can be either 
//one of two int values, either 0 or 1, will appear in the place of %


system("PAUSE");  // this ensures that the screen prompt does not automatically vanish after compiler finishes executing all the source codes
}