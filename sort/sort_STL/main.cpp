/*list容器 排序 自定义类型
* 按照年龄进行排序，年龄相同则按照身高进行排序
*/

# include <iostream>
# include <list>
# include <string>

using namespace std;

class Person {
public:
	string m_Name;
	int m_Height;
	int m_Age;

	Person(string name, int age, int height) {
		this->m_Name = name;
		this->m_Height = height;
		this->m_Age = age;
	}
};

bool compare(const Person& p1, const Person& p2) {
	if (p1.m_Age == p2.m_Age) {
		return p1.m_Height > p2.m_Height;
	}
	return p1.m_Age < p2.m_Age;
}


void test01() {
	list<Person> L;

	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person> ::iterator it = L.begin(); it != L.end(); it++) {
		cout << (*it).m_Name << "  " << (*it).m_Age << "  " << (*it).m_Height << endl;
	}
	cout << endl;
	//排序后
	cout << "排序后：" << endl;

	//L.sort();错误，编译器不知道按照什么排序
	L.sort(compare);
	for (list<Person> ::iterator it = L.begin(); it != L.end(); it++) {
		cout << (*it).m_Name << "  " << (*it).m_Age << "  " << (*it).m_Height << endl;
	}


}


int main() {
	test01();
}