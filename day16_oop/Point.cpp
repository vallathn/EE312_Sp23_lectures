// Point.cpp
#include "Point.h"
#include <math.h>

void Point::setX(int x1) {
	x = x1;
}

void Point::setY(int y) {
	this->y = y;
}

double Point::distanceFromOrigin() {
	return sqrt(x*x + y*y);
}

double Point::distance(Point other) {
	return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}