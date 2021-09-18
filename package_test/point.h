#pragma once
# include <iostream>
using namespace std;

//只保留类的声明就可以

//点类
class Point {
private:
	int m_X;
	int m_Y;
public:
	//设置x，y坐标；获取坐标
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
};

