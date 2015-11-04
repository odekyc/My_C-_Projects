The colon syntax can improve the performance of constructors. To test this, make sure that you print some text in the point’s constructors, destructor and also the assignment operator. Now, execute the following code in the test program and count the number of point constructor, destructor and assignment calls:

	Line l;
	
Now, change the constructors in the Line class to use the colon syntax to set the start- and end-point data members and run the test program again. Is the number of point constructor, destructor and assignment calls less than before? Apply the colon syntax also for the Point class constructors and if applicable also for the Circle class.