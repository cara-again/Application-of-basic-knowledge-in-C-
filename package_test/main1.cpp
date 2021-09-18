//判断点与圆的关系：空间欧氏距离来判断
//需要：1.两个类：圆、点；2.圆：圆心+半径，点：坐标；3.判断
//在一个类中，可以让另一个类作为本类中的成员

# include <iostream>
# include "point.h"
# include "circle.h"
# include "isincircle.h"
using namespace std;

////点类
//class Point {
//private:
//	int m_X;
//	int m_Y;
//public:
//	//设置x，y坐标；获取坐标
//	void setX(int x) {
//		m_X = x;
//	}
//	int getX() {
//		return m_X;
//	}
//	void setY(int y) {
//		m_Y = y;
//	}
//	int getY() {
//		return m_Y;
//	}
//};

////圆类
//class Circle {
//private:
//	int m_R;		//半径
//	Point m_Center; //圆心  在一个类中，可以让另一个类作为本类中的成员
//public:
//	//半径的设置与获取
//	void setR(int r) {
//		m_R = r;
//	}
//	int getR() {
//		return m_R;
//	}
//
//	//设置圆心  
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//	Point getCenter() {
//		return m_Center;
//	}
//};

////全局函数判断
//void isInCircle(Point& p, Circle& c) {
//	int DISTANCE = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int rDISTANCE = c.getR() * c.getR();
//
//	if (DISTANCE < rDISTANCE)
//		cout << "圆内" << endl;
//	else if (DISTANCE > rDISTANCE)
//		cout << "圆外" << endl;
//	else
//		cout << "圆上" << endl;
//}

//int main() {
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	Point p;
//	p.setX(10);
//	p.setY(10);
//
//	isInCircle(p, c);
//
//	return 0;
//}