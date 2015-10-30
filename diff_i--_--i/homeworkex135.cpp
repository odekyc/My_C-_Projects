#include<iostream>  // a preprocessor directive, include the contents of the iostream library in place of this line of code, and forms a composite file of 
//the contents of this iostream library with the source code

void main()   //main() function header, main() function is a void type that returns no value type
{   //beginning of main() function body


	using namespace std;   // the using directive allows the contents of the iostream library to be accessed and used
	int i=5;    //declares and initializes integer i to the value of 5
	printf("--i= %d\n", --i);   // displays onto the screen prompt the value of --i
	i=5;                    // reassign the integer value 5 to the variable i
	printf("i--= %d\n",i--);    //displays onto the screen promt the value of i--

	//explanation about the difference of --i and i--, if we set the initial value of i to 5, --i would decrement the value of i by 1 first, resulting in 4, 
	//and displays 4 onto the screen. while if the initial value of i=5, i-- would display 5 onto the screen first and then decrement the value of i by 1

	system("PAUSE");     // to pause the screen prompt instead of having it vanish immediately after compilation and execution of the source code


	


}
