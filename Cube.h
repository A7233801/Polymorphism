#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject
{
public:
	Cube();
	Cube(double length);
	Cube(double length,
		const string& color, bool filled);
	double getLength() const;
	void setLength(double);
	double getArea() const;
	double getVolume() const;
	string toString() const;

private:
	double length;
};  // Must place semicolon here

#endif