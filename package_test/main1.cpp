//�жϵ���Բ�Ĺ�ϵ���ռ�ŷ�Ͼ������ж�
//��Ҫ��1.�����ࣺԲ���㣻2.Բ��Բ��+�뾶���㣺���ꣻ3.�ж�
//��һ�����У���������һ������Ϊ�����еĳ�Ա

# include <iostream>
# include "point.h"
# include "circle.h"
# include "isincircle.h"
using namespace std;

////����
//class Point {
//private:
//	int m_X;
//	int m_Y;
//public:
//	//����x��y���ꣻ��ȡ����
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

////Բ��
//class Circle {
//private:
//	int m_R;		//�뾶
//	Point m_Center; //Բ��  ��һ�����У���������һ������Ϊ�����еĳ�Ա
//public:
//	//�뾶���������ȡ
//	void setR(int r) {
//		m_R = r;
//	}
//	int getR() {
//		return m_R;
//	}
//
//	//����Բ��  
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//	Point getCenter() {
//		return m_Center;
//	}
//};

////ȫ�ֺ����ж�
//void isInCircle(Point& p, Circle& c) {
//	int DISTANCE = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int rDISTANCE = c.getR() * c.getR();
//
//	if (DISTANCE < rDISTANCE)
//		cout << "Բ��" << endl;
//	else if (DISTANCE > rDISTANCE)
//		cout << "Բ��" << endl;
//	else
//		cout << "Բ��" << endl;
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