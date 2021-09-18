# include "circle.h"

//圆类

	//半径的设置与获取
void Circle :: setR(int r) {
	m_R = r;
}
int Circle::getR() {
	return m_R;
}

//设置圆心  
void Circle::setCenter(Point center) {
	m_Center = center;
}
Point Circle::getCenter() {
	return m_Center;
}