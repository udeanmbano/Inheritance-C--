/*
Author - Udean Mbano
Date 12/03/2015
//Program to Display Polymorphism And inheritance use of Virtual Functions
*/

#include "Shape.h"
#ifndef Circle_HEADER
#define Circle_HEADER


// first child class
class Circle : public Shape{
	double radius;

public:
	Circle(string n, double r);
	void setRadius(double r);

	double getRadius() const;
	 double getArea() const;

};
//Implementation
Circle::Circle(string n, double r) : Shape(n) {
	radius = r;
}

void Circle:: setRadius(double r){
	radius = r;
}

double Circle :: getRadius() const{
	return radius;
}
//calculates the area of the Circle
double Circle::getArea() const{
	return 3.14 * radius * radius;
}
 
#endif