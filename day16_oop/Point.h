#pragma once
// Point.h
struct Point {
	int x;
	int y;
	double distanceFromOrigin();
	double distance(Point);
	void setX(int);
	void setY(int);
};
