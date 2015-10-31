In the test program create a const point and try to set the x-coordinate:

	const Point cp(1.5, 3.9);

	cp.X(0.3);


Compile the program. Did you get a compiler error? It should give a compiler error because you try to change a const object.
Now replace the line that changes the x-coordinate to code that reads the x-coordinate:

	cout<<cp.X()<<endl;

Compile the program again. You will see that is still gives a compiler error even while retrieving the x-coordinate does not change the point object. This is because the compiler does not know that the function does not change anything. So we need to mark the x-coordinate getter as const by making it a const function. Do this also for the y-coordinate getter and the Distance() and ToString() functions because these don’t change the point object as well. Recompile the application. It should now work.