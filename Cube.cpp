
#include "Cube.h"

// Construct a default Cube object
Cube::Cube()
{
	length = 1;

}

// Construct a Cube object with specified length and height
Cube::Cube(double length)
{
	setLength(length);

}

Cube::Cube(
	double length, const string& color, bool filled)
{
	
	setLength(length);
	setColor(color);
	setFilled(filled);
}

// Return the length of this Cube
double Cube::getLength() const
{
	return length;
}

// Set a new radius
void Cube::setLength(double length)
{
	this->length = (length >= 0) ? length : 0;
}

// Return the height of this Cube


// Return the area of this Cube
double Cube::getArea() const
{
	return length * length * 6;
}

// Return the perimeter of this Cube
double Cube::getVolume() const
{
	return length* length*length;
}

// Redefine the toString function, to be covered in Section 15.5
string Cube::toString() const
{
	return "Cube";
}