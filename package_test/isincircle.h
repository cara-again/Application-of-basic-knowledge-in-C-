#pragma once
# include <iostream>
# include "point.h"
# include "circle.h"
using namespace std;

//全局函数判断
void isInCircle(Point& p, Circle& c) {
	int DISTANCE = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int rDISTANCE = c.getR() * c.getR();

	if (DISTANCE < rDISTANCE)
		cout << "圆内" << endl;
	else if (DISTANCE > rDISTANCE)
		cout << "圆外" << endl;
	else
		cout << "圆上" << endl;
}