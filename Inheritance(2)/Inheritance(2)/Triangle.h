/*
Author - Udean Mbano
Date 12/03/2015
//Program to Display Polymorphism And inheritance use of Virtual Functions
*/

#include "Shape.h"
#ifndef Triangle_HEADER
#define Triangle_HEADER


// third child class
class Triangle : public Shape{

	double base, height;

public:
	Triangle(string n, double h, double b);

	void setHeight(double h);

	void setBase(double b);

	double getHeight();

	double getBase();

	 double getArea() const;
};
Triangle::Triangle(string n, double h, double b) : Shape(n) {
	height = h;
	base = b;
}

void Triangle:: setHeight(double h){
	height = h;
}

void Triangle::setBase(double b){
	base = b;
}

double Triangle :: getHeight(){
	return this->height;
}

double Triangle:: getBase(){
	return this->base;
}
//calculates the area of the Triangle
 double Triangle:: getArea() const{
	return (0.5 * this->base) * this->height;
}

#endif