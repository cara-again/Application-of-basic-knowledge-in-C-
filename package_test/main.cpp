//�жϵ���Բ�Ĺ�ϵ���ռ�ŷ�Ͼ������ж�
//��Ҫ��1.�����ࣺԲ���㣻2.Բ��Բ��+�뾶���㣺���ꣻ3.�ж�
//��һ�����У���������һ������Ϊ�����еĳ�Ա

//ʹ��ǰ��main1.cppɾ��


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