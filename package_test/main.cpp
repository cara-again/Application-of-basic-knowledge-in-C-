//判断点与圆的关系：空间欧氏距离来判断
//需要：1.两个类：圆、点；2.圆：圆心+半径，点：坐标；3.判断
//在一个类中，可以让另一个类作为本类中的成员

//使用前将main1.cpp删除


# include <iostream>
# include "point.h"
# include "circle.h"
# include "isincircle.h"
using namespace std;

int main() {
	Circle c;
	c.setR (10);
	Point center;
	center.setX (10);
	center.setY (0);
	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(p, c);

	return 0;
}