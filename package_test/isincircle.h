#pragma once
# include <iostream>
# include "point.h"
# include "circle.h"
using namespace std;

//ȫ�ֺ����ж�
void isInCircle(Point& p, Circle& c) {
	int DISTANCE = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int rDISTANCE = c.getR() * c.getR();

	if (DISTANCE < rDISTANCE)
		cout << "Բ��" << endl;
	else if (DISTANCE > rDISTANCE)
		cout << "Բ��" << endl;
	else
		cout << "Բ��" << endl;
}