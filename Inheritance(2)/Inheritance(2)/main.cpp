/*
Author - Udean Mbano
Date 12/03/2015
//Program to Display Polymorphism And inheritance use of Virtual Functions
*/

#include <iostream>
#include<iomanip>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main(){

	Circle c("Circle", 3.1);
	cout << "The area of " << c.getName() << "( 3.14 * 2 * " << c.getRadius() << " ) is : " << c.getArea() << endl;

	Rectangle r("Rectangle", 4.2, 2.5);
	cout << "The area of " << r.getName() << "( " << r.getWidth() << " x " << r.getLength() << " ) is : " << r.getArea() << endl;

	Triangle t("Triangle", 4, 3);
	cout << "The area of " << t.getName() << "( 1/2 x " << t.getBase() << " x " << t.getHeight() << " ) is : " << t.getArea() << endl;

	cout << endl << "====================================" << endl;

	Shape* shapes[3] = { new Circle("Circle", 3.1), new Rectangle("Rectangle", 4.2, 2.5), new Triangle("Triangle", 4, 3) };
	for (int i = 0; i< 3; i++){
		cout << "The area of " << shapes[i]->getName() << " is : " << shapes[i]->getArea() << endl;
	}
	// tricks using three pointers to the base in one array
	system("pause");
	cout << endl;
	cout << " Udean`s Technique Great C++" << endl;
	cout << endl << "====================================" << endl;
	cout << endl;
	//Assign value to your constructor
	Circle C("Circle", 3.1); //Line 3
	Rectangle R("Rectangle", 4.2, 2.5); //Line 3
	Triangle  T("Triangle", 4, 3); //Line 3
	Shape *shapeTypeList[3] = { &C, &R, &T };
	for (int i = 0; i< 3; i++){
		cout << "The area of " << shapeTypeList[i]->getName() << " is : " << shapeTypeList[i]->getArea() << endl;
	}

	system("pause");
	return 0;
}
