# include "circle.h"

//Բ��

	//�뾶���������ȡ
void Circle :: setR(int r) {
	m_R = r;
}
int Circle::getR() {
	return m_R;
}

//����Բ��  
void Circle::setCenter(Point center) {
	m_Center = center;
}
Point Circle::getCenter() {
	return m_Center;
}