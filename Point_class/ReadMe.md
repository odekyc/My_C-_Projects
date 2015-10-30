Now you must use C++ syntax!!
In this exercise we start creating a Point class with and x- and y-coordinates. This class will be extended in further exercises. In Visual Studio, create an empty “Win32 Console Application”. If you don’t check the “Empty Project” checkbox in the wizard, Visual Studio will generate code for you and will set the “use pre-compiled headers” on... Pre-compiled headers, which are a Visual Studio specific option, require special attention in your code and file settings so that is why an empty project is more appropriate. First add a header file for the Point class with private members for the x- and y-coordinates. Do not forget to add the #ifndef/#define/#endif statements to avoid multiple inclusion. Also make sure you make to following public functionality (see also Figure 1):
• Default constructor.
• Destructor.
• Getter functions for the x- and y-coordinates (GetX() and GetY() functions).
• Settter functions for the x- and y-coordinates (SetX() and SetY() functions).
• A ToString() that returns a string description of the point. Use the std::string class as return type.

Next create the source file that implements the Point class defined in the header file. The source file must include the header file. Making the string in the ToString() function, requires conversion of the double coordinates to a string. Easiest is to use a std::stringstream object and the standard stream operators (as with iostream) to create the string. This requires the “sstream” header file. Use the str() function to retrieve the string from the string buffer. The output can be like: “Point(1.5, 3.9)” Finally create a test program (separate source file with a main() function) for the Point class. It should do the following things:
• Include the point header file.
• Ask the user for the x- and y-coordinates using the std::cin object (needs the “iostream” header file).
• Then create a Point object using the default constructor.
• Set the coordinates entered by the user using the setter functions.
• Print the description of the point returned by the ToString() function.
• Print the point coordinates using the get functions.