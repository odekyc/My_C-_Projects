It would be nice if you could send a point or a line directly to the cout object without calling
the ToString() method, just as with the primitive types. This is possible by adding a <<
operator function that has on the left an std::ostream and on the right the point or line object.
Since you can’t add a member function to the std::ostream class, you have to create it as a
global function (outside the class definition, but inside the class header file):
	ostream& operator << (ostream& os, const Point& p); // Send to ostream.
The implementation uses the << operator to send data to the os input argument. Since it is a
global function, you can’t access the private members of Point. To simplify things, you can
use the ToString() method of Point to get the string to send to the os argument.
Also create a similar << operator for printing lines (and circles if you made a circle class).
Adapt the test program to test the << operator for points and lines.