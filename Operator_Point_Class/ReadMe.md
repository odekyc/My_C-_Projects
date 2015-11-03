By supporting operators, you can make your classes easier and more natural to use. However
you must not “overuse” operators. Only use operators if the functionality of the operator is
clear without reading documentation. Thus adding mathematical operators to a complex
number class is good but using a + operator with a double as an argument on a point to
increase the x-coordinate is questionable. So use operators with care.
In this exercise we add a few operators to the Point class. Most operators do not change the
original objects but return the result as a new object. Normally only the = operator and +=
and variants change the original object. Add the following operators:
	Point operator - () const; // Negate the coordinates.
	Point operator * (double factor) const; // Scale the coordinates.
	Point operator + (const Point& p) const; // Add coordinates.
	bool operator == (const Point& p) const; // Equally compare operator.
	Point& operator = (const Point& source); // Assignment operator.
	Point& operator *= (double factor); // Scale the coordinates & assign.
Most operators above are self-explanatory. The = and *= operator changes the current object
so they can’t be const functions. To make it possible to chain the = and *= operators (E.g.:
a=b+=c), it must return the “this” object.
Change the main program to test the operators.
Since the assignment operator is part of the canonical header file, add this operator also to
the Line and, if applicable, theCircle class. Always be sure to preclude self-assignment inside
your assignment operator functions.