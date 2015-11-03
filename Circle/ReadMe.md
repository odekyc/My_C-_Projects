Create a Circle class. It has a center point and radius. Create the proper constructors, destructor, selector and modifier functions. Also add functions for getting the diameter, area and circumference. Don’t forget a ToString() function.
In further exercises, all optimizations requested for Line should also be implemented for Circle. See also Figure 4.

Point class private variables:
- m_x
- m_y

methods:
- Distance()
- ToString()

Circle class private variables:

- m_radius

methods:
- CentrePoint()
- Radius()
- Diameter()
- Area()
- Circumference()
- ToString()

Note that instead of using your own PI value, Microsoft’s version of the math library defines a constant for PI named M_PI. But because it is not standard you need to enable that define by setting the _USE_MATH_DEFINES symbol in the project settings or add before including “cmath”:

	#define _USE_MATH_DEFINES

	https://www.quantnet.com/threads/level-3-exercise-2-3-6.9269/