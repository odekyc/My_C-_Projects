It can be useful to create a hierarchy of related classes using base- and derived classes.
- Classes are related (same family)
- Common data and functionality can be put in a base class.
- You can work with derived classes as if it is the base class.
In this exercise we are going to transform the Point and Line class into a Shape hierarchy as shown in Figure 1.

![Figure 1](Capture.PNG)

First create a Shape base class.
- Add a source- and header file for a Shape class.
- Add a data member for an id number of type int.
- Add a default constructor that initializes the id using a random number. You can use the rand() function from the “stdlib.h” header file.
- Add a copy constructor that copies the id member.
- Add an assignment operator that copies the id member.
- Add a ToString() function that returns the id as string e.g. “ID: 123”.
- Add an ID() function the retrieve the id of the shape.

Next the Point and Line classes (and the Circle class if applicable) must derive from Shape.

- Add the Shape class in the inheritance list of the Point, Line and optionally the Circle class.
- The constructors of the Point, Line and optionally the Circle class should call the appropriate constructor in the Shapebase class.
- The assignment operator should call the assignment operator of the Shape base class. Otherwise the shape data will not be copied.
- Finally add code to the main program to test inheritance