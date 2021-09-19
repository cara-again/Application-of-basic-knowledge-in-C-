/*五名选手：ABCDE，10个评委，每一个选手都要打分，去除最高分，去除最低分，求平均份
* 1.vector
* 2.遍历vector，取出每一个选手，for循环，10评分分别存到deque
* 3.sort排序后去除最高分和最低分
* 4.deque遍历，累加总分
* 5.获取平均分
*/

# include <iostream>
# include <vector>
# include <deque>
# include <string>
# include <algorithm>
# include <ctime>

using namespace std;

class Person {
public:
	string m_Name;
	int m_Score;

	Person(string name, int score) {
		this->m_Name = name;
		this->m_Score = score;
	}
};

void createPerson(vector<Person>& vec) {
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++) {
		string name = "选手";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);

		//将创建的person对象放入容器中
		vec.push_back(p);
	}
}

void setScore(vector<Person>& vec) {
	for (vector<Person> ::iterator it = vec.begin(); it != vec.end(); it++) {
		//放入评委分数
		deque<int> d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 40 + 60; //rand() % 40为0-39
			d.push_back(score);
		}
		/*		最初的打分情况
		cout << it->m_Name << "  " ;
		for (deque<int> ::iterator dit = d.begin(); dit != d.end(); dit++) {
			cout << *dit << " " ;
		}
		cout << endl;
		*/


		sort(d.begin(), d.end());
		//去除最高分，去除最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int> ::iterator dit = d.begin(); dit != d.end(); dit++) {
			sum += *dit;
		}
		int avg = sum / d.size();

		//将平均分复制给选手
		it->m_Score = avg;
	}
}

void showScore(vector<Person>& vec) {
	for (vector<Person> ::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << it->m_Name << " " << it->m_Score << endl;
	}
}

int main() {
	//随机数种子
	srand((unsigned int)time(NULL));

	vector<Person> vec;
	createPerson(vec);

	/* //测试
	for (vector<Person> ::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << (*it).m_Name << "  " << (*it).m_Score << endl;
	}
	*/

	//打分
	setScore(vec);
	showScore(vec);

}