/**
	@project: MIT assignments
	@file: assignment_3.cpp
	@description: classes, polymorphism, and inheritance

	@author: Dmytro Kuksenko
	@date: 2020-05-30
*/

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "geometry.h"

using namespace std;

/**
 	 Prints the area of a polygon and (x,y) points that define it.
 	 @param p: pointer to a Polygon class
*/
void printAttributes(Polygon *p){

	cout << "p's area is:" << p->area() << endl;

	cout << "p's points are: " << endl;
	const PointArray *pa = p->getPoints();

	for(int i=0; i < pa->getSize(); ++i){

		cout << "(" << pa-> get(i)-> getX() << ", " << pa->get(i)->getY() << ")\n" ;
	};
};


int main(){


	cout << "Enter lower left and upper right coordinates of a rectangle as four separate integers:" << endl;

	int llx, lly, upx, upy;
	cin >> llx >> lly >> upx >> upy;

	Point ll(llx, lly), ur(upx, upy);

	Rectangle rect(ll, ur);
	printAttributes( &rect);

	cout << "Enter coordinates of a triangle as six separated integer points:" << endl;

	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	Point p1(x1, y1), p2(x2, y2), p3(x3, y3);

	Triangle tri(p1, p2, p3);
	printAttributes(&tri);

	return 0;
}
