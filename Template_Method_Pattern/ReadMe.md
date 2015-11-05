In this exercise we are going to create a Print() function that is printing the shape information to the cout object. ThePrint() function can use the ToString() to obtain the string to print. You see that the implementation of Print() is in each derived class largely the same; calling ToString() and sending the result to cout. Since the ToString() function is polymorphic, we can use the polymorphic behavior in the Print() function of Shape. Thus:

- Add a Print() function to the Shape class.
- In this function, call the ToString() function and send the result to the cout object.
- In the test program, create a point and line object and call the Print() function. Does it print the right information even when point and line do not have the Print() function?

You have now created a function for the base class (Print()) that does all the functionality common to all derived classes. Only the part of that function that is different for each derived class is delegated to a polymorphic function (ToString()). This mechanism is an often used design pattern called the “Template Method Pattern”.