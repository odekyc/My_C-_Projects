Throwing an int is an easy solution. But exception handling is also object oriented and allows us to throw an object. In this exercise we will create an exception hierarchy with an ArrayException base class and an OutOfBoundsExceptionderived class as shown in Figure 9:

- You can implement both exception classes in the header file for simplicity.
- Give the ArrayException an abstract GetMessage() function that returns a std::string.
- Give the OutOfBoundsException class a constructor with an int as argument that indicates the erroneous array index and store it in a data member.
- Override the GetMessage() function and let the implementation return a message string saying the given index is out of bounds.
- In the Array class, throw now a OutOfBoundsException object instead of an integer.
- Change the main program so that it catches the ArrayException base class and uses the GetMessage() function to display an error message.

![Figure](https://github.com/odekyc/My_Cplusplus_Projects/blob/master/Exception_Object/Capture.png)