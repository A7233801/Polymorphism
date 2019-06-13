#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h"

class Ball : public GeometricObject
{
public:
	Ball();
	Ball(double);
	Ball(double radius, const string& color, bool filled);
	double getRadius() const;
	void setRadius(double);
	double getArea() const;
	double getVolume() const;
	virtual string toString() const;

private:
	double radius;
}; // Must place semicolon here

#endif
