#include "rectangleType.h"

#ifndef boxType_HEADER
#define boxType_HEADER


class boxType : public rectangleType
{
public:
	void setDimension(double l, double w, double h);
	//Function to set the length, width, and height
	//of the box.
	//Postcondition: length = l; width = w; height = h;
	double getHeight() const;
	//Function to return the height of the box.
	//Postcondition: The value of height is returned.
	double area() const;
	//Function to return the surface area of the box.
	//Postcondition: The surface area of the box is
	// calculated and returned.
	double volume() const;
	//Function to return the volume of the box.
	//Postcondition: The volume of the box is
	// calculated and returned.
	void print() const;
	//Function to output the length, width, and height of a box.
	boxType();
	//Default constructor
	//Postcondition: length = 0; width = 0; height = 0;
	boxType(double l, double w, double h);
	//Constructor with parameters
	//Postcondition: length = l; width = w; height = h;
private:
	double height;
};

//implementation
boxType:: boxType()
{
	height = 0.0;
}
boxType:: boxType(double l, double w, double h)
	: rectangleType(l, w)
{
	if (h >= 0)
		height = h;
	else
		height = 0;
}
void boxType :: setDimension(double l, double w, double h)
{
rectangleType:: setDimension(l, w);
	if (h >= 0)
		height = h;
	else
		height = 0;
}
void boxType :: print() const
{
rectangleType:: print();
	cout << "; Height = " << height;
}
double boxType :: getHeight() const
{
	return height;
}
double boxType :: area() const
{
	return 2 * (getLength() * getWidth()
		+ getLength() * height
		+ getWidth() * height);
}
double boxType :: volume() const
{
	return rectangleType:: area() * height;
}
#endif