The following program uses assignment-operators. Predict what will be printed on screen (provide a code file with comments stating the output for each line). The operators + and = = have a higher priority than the assignment-operators.
/* Assignment operators */
    #include <stdio.h>
	int main()
	{
	int x=2;
	int y;
	int z;
	x*=3+2;
	printf("x=%d\n", x);
	x*=y=z=4;
	printf("x=%d\n", x);
	x=y==z;
	printf("x=%d\n", x);
	return 0;
	}