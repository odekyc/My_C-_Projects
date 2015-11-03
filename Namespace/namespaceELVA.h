#ifndef namespaceELVA_HPP
#define namespaceELVA_HPP


#include<string>
#include<sstream>
#include<iostream>
using namespace std;

namespace ELVA              //nested namespace
{
	namespace CAD
	{
		
		class Point
		{
		

		private:
		 double m_x; // X value of point
         double m_y; // Y value of point
		 public:
         Point::Point(double newx, double newy)
{// Initialize using newx and newy
	  m_x=newx;
	  m_y=newy;
 /*   x = newx;            
	y = newy;*/
}

		 Point::Point()  // Colon syntax!!!!!!!!!!!!!!!!!
{// Default constructor
	          m_x=0;
			  m_y=0;
}

		 double GetX()
	     {
				 return m_x;//get x function
		 }
	     double GetY()
		{
				 return m_y;   //get y function
		 }
		  void SetX(double newxval)
		{
         m_x = newxval;
          } // Set the x value
    void SetY(double newyval)
		{
			m_y=newyval;// Set the y value
	}


	string ToString1()
	{
		std::stringstream ss;
ss << "Point(" << GetX() << "," << GetY() << ")";                  //use stringstream to create a string for current Point variable fashioned after (x,y) format
std::string mystr=ss.str();

return mystr;



}

	double DistanceOrigin()
		{
			double result= pow(m_x,2) + pow( m_y, 2);

	return sqrt(result);
       }// Calculate the distance to the origin (0, 0).
    double Distance(Point p)
		{
			double xbetween= (p.m_x-m_x)*(p.m_x-m_x);
	double ybetween= (p.m_y-m_y)*(p.m_y-m_y);

	return sqrt( xbetween + ybetween);// Calculate the distance between two points.
		}


	};

		class Line
{
private:

		Point startPoint;	// e1
		Point endPoint;		// e2
public:
Line::Line() 
{
	//default constructor for Line
}

Line::~Line()
{
	       // default destructor for Line
}

Line::Line(const Point& p1, const Point& p2)
{
	startPoint=p1;
	endPoint=p2;                    // if the user include two Point type variables as arguements, set the first Point arguement as startpoint, second arguement as endpoint
}

Line::Line(const Line& Ll)
{
	startPoint=Ll.startPoint;                   // copy constructor if the user include a Line type arguement
	endPoint=Ll.endPoint;
}


void SetPoint( Point &tempstart, Point& tempend)
{
	startPoint=tempstart;
	endPoint=tempend;                          //Set the startPoint and endPoint
}
void GetPoint( Point& tempstart, Point& tempend)
{
	
	cout<<"Start Point has coordinate : ";                 //get the startPoint and endPoint
	tempstart.ToString1();
	cout<<"\nEnd Point has coordinate : ";
	tempend.ToString1();
}
string ToString()
{
	
	stringstream sm;
	sm << "Start Point: ("<<startPoint.GetX()<<","<<startPoint.GetY()<<")\n"<<"End Point: ("<<endPoint.GetX()<<","<<endPoint.GetY()<<")";

	string mystring=sm.str();

	return mystring;
	                                   //use stringstream to create a string for the Line variable

}
		};

		class Circle
{
private:    //declare private variables of Circle class
	double m_radius;
	Point centralpoint;
	double diameter;
	double area;
	double circumference;
public:
Circle::Circle()
{
}        //default constructor of Circle

Circle::Circle( double tempradius)            //constructor for Circle with radius passed as parameter to derive other private variables
{
	m_radius=tempradius;
	diameter= 2*m_radius;
	area= 3.141592653589793238463* pow(m_radius, 2);
	circumference= 3.141592653589793238463*m_radius*2;
}
Circle::~Circle()
{
}            //destructor 
	Point CentralPoint(Point&source)
{
	centralpoint=source;                    // use the Point passed in the parameter to set as centralpoint of Circle

	return centralpoint;
}
	double Radius(double tempradius)
{
	m_radius=tempradius;             // setter and getter of radius
	 
	return m_radius;
}
	double Circle::Diameter()
{
	diameter= 2*m_radius;         // getter of the diameter
	return diameter;
}
	double Area()
{
	area= 3.141592653589793238463* pow(m_radius, 2);          //getter of the area
	return area;
}
	double Circumference()
{
	circumference= 3.141592653589793238463*m_radius*2;           //getter of the circumference
	return circumference;
}
	string ToString2()
{
	
	stringstream sn;
	sn<<"Central Point coordinates : \nx-coordinate : "<< centralpoint.GetX() <<" y-coordinates : "<<centralpoint.GetY()<<"\n"<<"Radius : "<<m_radius<<"\n"<<"Diameter : "<<diameter<<"\nArea : "<<area<<"\ncircumference : "<<circumference;

     string mystr=sn.str();                  //use stringstream to create a string for the Circle variable
	 return mystr;

	}};
	}
	namespace Containers
	{ 
		using ELVA::CAD::Point;
		class Array
		{
			private:      //declare private variables for class Array
	int size;
	Point* m_data;
	
	const Point* m;
	Point start, end;

		public:
Array::Array()
{
	//default constructor
}
			

Array::Array(int tempsize)
{
	using ELVA::CAD::Point;           //constructor with an integer parameter as size of Array

	m_data= new Point[tempsize];       // create a pointer-to Point array of size tempsize
}
Array::Array(Point *pp)
{
	m_data=pp;             //use parameter pointer to Point variable pp and assigns its content to m_data
}


Array::~Array()
{
}  //destructor

int Size(int tempsize)
{
	size=tempsize;         //setter and getter of size of array

	return size;
	
}
void SetElement(double tempx, double tempy)        //set the elements of an array
{
	
	    double j=12.5;
		double h=16.9;
	
	
	
	for(int i=0; i<size ; i++)
	{
		
		
		Point temp(tempx+j, tempy+h);

		 m_data[i]=temp;
		 


		j+=9.4;
		h+=7.3;
	}
}

void Array :: GetElement()        //get the elements of an array
{
	for(int i=0; i<size ; i++)
	{
		cout<<"m_data["<<i<<"] : "<<m_data[i].ToString1()<<endl;
	}
}


Point&  operator [] (int index)    //the operator [] member function
{    
	if ( index>=size)
	{
		return m_data[0];
	}
	else
	{
	return m_data[index];
	}}

const Point& Array:: operator [] (int index) const       //the const operator [] member function
{
	if ( index>=size)
	{
		return m[0];
	}
	else
	{
	return m[index];
	
	}
}

		};
	}
	}

#endif

		
	



