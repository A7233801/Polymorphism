
#include "Ball.h"

// Construct a default Ball object
Ball::Ball()
{
	radius = 1;
}

// Construct a Ball object with specified radius
Ball::Ball(double radius)
{
	setRadius(radius);
}

// Construct a Ball object with specified radius,
//  color and filled values
Ball::Ball(double radius, const string& color, bool filled)
{
	this->radius = radius;
	setColor(color);
	setFilled(filled);
}

// Return the radius of this Ball
double Ball::getRadius() const
{
	return radius;
}

// Set a new radius
void Ball::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

// Return the area of this Ball
double Ball::getArea() const
{
	return radius * radius * 4 * 3.14159;
}

// Return the perimeter of this Ball
double Ball::getVolume() const
{
	return radius * radius * radius * 4 / 3 * 3.14159;
}

// Return the diameter of this Ball

// Redefine the toString function
string Ball::toString() const
{
	return "Ball";
}