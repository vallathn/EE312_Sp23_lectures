// point_main.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Point.h"
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	Point p1;
	p1.setX(1);
	p1.setY(1);
	cout << p1.distanceFromOrigin() << endl;

	Point p2 = { 3, 3 };
	cout << p1.distance(p2) << endl;

	Point* p3 = new Point;
	(*p3).setX(4);
	(*p3).setY(4);

	cout << p1.distance(*p3) << endl;

	delete(p3); // free allocated memory
    
    // print out this file's contents
	ifstream in("point_main.cpp");
	string line;
	while (getline(in, line)) {
		cout << line << endl;
	}


    return 0;
}

