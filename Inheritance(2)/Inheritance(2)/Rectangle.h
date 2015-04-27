/*
Author - Udean Mbano
Date 12/03/2015
//Program to Display Polymorphism And inheritance use of Virtual Functions
*/

#include "Shape.h"
#ifndef Rectangle_HEADER
#define Rectangle_HEADER


// second child class
class Rectangle : public Shape{

	double length, width;

public:
	Rectangle(string n, double w, double l);

	void setWidth(double w);
	void setLength(double l);

	double getWidth();

	double getLength();
 double getArea()const;

};

//implementation
Rectangle::Rectangle(string n, double w, double l) : Shape(n) {
	width = w;
	length = l;
}

void Rectangle:: setWidth(double w){
	width = w;
}

void Rectangle:: setLength(double l){
	length = l;
}

double Rectangle:: getWidth(){
	return this->width;
}

double Rectangle::getLength(){
	return this->length;
}
//calculates the area of the Rectangle
double Rectangle:: getArea()const{
	return this->length * this->width;
}

#endif