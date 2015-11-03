#include<string>
#include<sstream>
#include<iostream>
using namespace std;

namespace ELVA
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


	void ToString1()
	{
		std::stringstream ss;
ss << "Point(" << GetX() << "," << GetY() << ")";
std::string mystr=ss.str();

}

	double DistanceOrigin()
		{double result= pow(m_x,2) + pow( m_y, 2);

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
	endPoint=tempend;
}
void GetPoint( Point& tempstart, Point& tempend)
{
	
	cout<<"Start Point has coordinate : ";
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


}
		};

		class Circle
{
private:
	double m_radius;
	Point centralpoint;
	double diameter;
	double area;
	double circumference;
public:
Circle::Circle()
{
}

Circle::Circle( double tempradius)
{
	m_radius=tempradius;
	diameter= 2*m_radius;
	area= 3.141592653589793238463* pow(m_radius, 2);
	circumference= 3.141592653589793238463*m_radius*2;
}
Circle::~Circle()
{
}
	Point CentralPoint(Point&source)
{
	centralpoint=source;

	return centralpoint;
}
	double Radius(double tempradius)
{
	m_radius=tempradius;
	 
	return m_radius;
}
	double Circle::Diameter()
{
	diameter= 2*m_radius;
	return diameter;
}
	double Area()
{
	area= 3.141592653589793238463* pow(m_radius, 2);
	return area;
}
	double Circumference()
{
	circumference= 3.141592653589793238463*m_radius*2;
	return circumference;
}
	string ToString()
{
	
	stringstream sn;
	sn<<"Central Point coordinates : \nx-coordinate : "<< centralpoint.GetX() <<" y-coordinates : "<<centralpoint.GetY()<<"\n"<<"Radius : "<<m_radius<<"\n"<<"Diameter : "<<diameter<<"\nArea : "<<area<<"\ncircumference : "<<circumference;

     string mystr=sn.str();
	 return mystr;

	}};
	}
	namespace Containers
	{ 
		using ELVA::CAD::Point;
		class Array
		{
			private:
	int size;
	Point* m_data;
	
	const Point* m;
	Point start, end;

		public:
Array::Array()
{

}
			

Array::Array(int tempsize)
{
	using ELVA::CAD::Point;

	m_data= new Point[tempsize];
}
Array::Array(Point *pp)
{
	m_data=pp;
}


Array::~Array()
{
}

int Size(int tempsize)
{
	size=tempsize;

	return size;
	
}
void SetElement(double tempx, double tempy)
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

Point&  operator [] (int index)
{    
	if ( index>=size)
	{
		return m_data[0];
	}
	else
	{
	return m_data[index];
	}}

const Point& Array:: operator [] (int index) const
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



		
	



