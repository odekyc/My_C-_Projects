The ToString() function of the Shape class is overridden in the derived classes. But for the derived class it is still possible to use the base class functionality. In the ToString() function of Point and Line we also want to incorporate the ID from theShape base class.

- In the ToString() method of Point, call the ToString() method of the Shape base class: std::string s=Shape::ToString();
- Append the shape description string to the point description string before returning.
- Do this also for the ToString() function in the Line class (and Circle class).
- Test the application again. Is now the ID printed when printing a point or line?