To avoid name conflicts, programmers can place their classes in a namespace. For example the standard library is placed in a namespace called std. You should put your classes in your own namespace. Thus place the CAD classes (Shape,Point, Line, etc) in the namespace: YourName::CAD Place the container classes (Array) in the namespace: YourName::Containers Now access the classes in your own namespace using:
- Full class name including namespace for the Point used in the Array class. Note that you can use only the CAD part of the namespace without the YourName part because the Point is also in the YourName namespace.
- In the main program, the full namespace for Point class.
- In the main program, using declaration for using a single class (Line).
- In the main program, using declaration for a complete namespace (Containers).
- In the main program, using the Circle class by creating a shorter alias for the YourName::CAD namespace.