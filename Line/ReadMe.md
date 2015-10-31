In the final exercise for this chapter we are going to create a Line class. The Line class has a start- and an end-point. So the Line class should have two Point objects as data members. This mechanism is called “composition”. See also Figure 3. Give the Line class the following functionality:

- Default constructor (set the points to 0, 0).
- Constructor with a start- and end-point.
- Copy constructor.
- Destructor.
- Overloaded getters for the start- and end-point.
- Overloaded setters for the start- and end-point.
- A ToString() function that returns a description of the line.
- A Length() function that returns the length of the line. Note that you can use the distance function on the embeddedPoint objects to calculate the length. This mechanism is called “delegation”.
Use const arguments, const functions and pass objects by reference where applicable.
Point class has the following private variables:
- m_x
- m_y
and the following methods:
- Distance()
- ToString()
Line class has the following methods:
- P1()
- P2()
- Length()
- ToString()