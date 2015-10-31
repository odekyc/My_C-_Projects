In this exercise we are going to add distance functions to the Point class. The distance functions have the following signature:
double DistanceOrigin(); // Calculate the distance to the origin (0, 0).
double Distance(Point p); // Calculate the distance between two points.
Add the definitions to the header file and implement the functions in the source file. Use the std::sqrt() function from the “cmath” header file to implement the Pythagoras algorithm. Extend the main program to print the distance between the origin and another point and test it.

you should have the following private variables and methods for your Point class:

private variables:

* m_x

* m_y

methods:

* GetX()

* GetY()

* SetX()

* SetY()

* ToString()

* Distance()

* DistanceOrigin()


