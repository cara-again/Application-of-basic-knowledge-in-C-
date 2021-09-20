//# include <iostream>
//# include <set>
//
//using namespace std;

//class Compare {//将仿函数作为一个类型
//public:
//	bool operator()(int v1, int v2) {//const int& v1, const int& v2
//		return v1 > v2;
//	}
//};
//
//
////set容器排序
//void test01() {
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(30);
//	s1.insert(80);
//
//	for (set<int> ::iterator it = s1.begin(); it != s1.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//指定排序规则
//	set<int, Compare> s2;
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(50);
//	s2.insert(30);
//	s2.insert(80);
//
//	for (set<int,Compare> ::iterator it = s2.begin(); it != s2.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	test01();
//
//	return 0;
//}


//set自定义排序
# include <iostream>
# include <string>
# include <set>

using namespace std;

class Person {
public:
	string m_Name;
	int m_Age;

	Person(string name, int age) {
		m_Name = name;
		m_Age = age;
	}
};

class Compare{
public:
	bool operator()(const Person& p1, const Person& p2) {
		return p1.m_Age > p2.m_Age;
	}
};

void test01() {
	set<Person, Compare> s1;

	Person p1("刘备", 24);
	Person p2("刘备", 28);
	Person p3("刘备", 25);
	Person p4("刘备", 21);

	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person> ::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << it->m_Name << "  " << it->m_Age << endl;
	}

}

int main() {
	test01();
}
