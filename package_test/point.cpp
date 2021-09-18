# include "point.h"


//设置x，y坐标；获取坐标
//作用域是Point范围内的
void Point :: setX(int x) {
	m_X = x;
}
int Point :: getX() {
	return m_X;
}
void Point :: setY(int y) {
	m_Y = y;
}
int Point :: getY() {
	return m_Y;
}
