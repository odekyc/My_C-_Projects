When objects are removed from memory, the destructor is called. When a derived class destructor is called, it will automatically call the base class destructor. But when you have pointers to a base class, deleting objects might not be done correctly. If not done already, print some text in the destructors of the Shape, Point and Line classes. Then test the following code:

	Shape* shapes[3];
	shapes[0]=new Shape;
	shapes[1]=new Point;
	shapes[2]=new Line;
	for (int i=0; i!=3; i++) delete shapes[i];
	
Will the proper destructors (including the destructor of the Shape base class) be called? In this case, the derived class destructor will only be called when the destructor is declared virtual in the base class. Do this in the Shape class and run the code again. Are the proper destructors called now?