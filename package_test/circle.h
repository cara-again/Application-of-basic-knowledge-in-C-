#pragma once
# include <iostream>
# include "point.h"
using namespace std;

//Բ��
class Circle {
private:
	int m_R;		//�뾶
	Point m_Center; //Բ��  ��һ�����У���������һ������Ϊ�����еĳ�Ա
public:
	//�뾶���������ȡ
	void setR(int r);
	int getR();

	//����Բ��  
	void setCenter(Point center);
	Point getCenter();
};