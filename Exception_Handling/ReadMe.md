In the array class we created previously, the bounds checking was very basic. There was no error generated, but setting an element was ignored or the first element was returned. Obviously you want to know if there was an out of bounds error. This is possible by exception handling.

Change the Array class to throw exceptions:

- In the GetElement(), SetElement() and index operator throw -1 if the index was too small or too big.
- In the main program, create an Array object and access an element that does not exist. Run the program. What happens?
- The exception must be caught, so place the code inside a try ... catch block that catches an int.
- In the catch handler, print an error message.