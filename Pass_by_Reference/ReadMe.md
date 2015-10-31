In the previous exercise, you saw that the point passed to the Distance() method was copied. Since creating a copy is unnecessary in this case, change this function so that it passes the input point “by reference” so that no copy is made. Pass it as “const reference” to make it impossible to change the input point from within the Distance() function. Run the program again. It should call the copy constructor fewer times than before. Also test if you can change the input point in the Distance() function. This should result in a compiler error.