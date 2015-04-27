#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#ifndef Shape_HEADER
#define Shape_HEADER
//abstract  base class
class Shape{
	
protected:
	string name;

public:
	Shape(string s);

	void setName(string s);
	string getName() const;

	// pure virtual function
	virtual double getArea() const = 0;

};
//implementation
Shape::Shape(string s){
	name = s;
}

void Shape:: setName(string s){
	name = s;
}
//returns the name of the shape
string Shape:: getName() const{
	return name;
}
#endif