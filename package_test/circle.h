#pragma once
# include <iostream>
# include "point.h"
using namespace std;

//圆类
class Circle {
private:
	int m_R;		//半径
	Point m_Center; //圆心  在一个类中，可以让另一个类作为本类中的成员
public:
	//半径的设置与获取
	void setR(int r);
	int getR();

	//设置圆心  
	void setCenter(Point center);
	Point getCenter();
};