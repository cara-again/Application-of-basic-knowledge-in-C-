/*����ѡ�֣�ABCDE��10����ί��ÿһ��ѡ�ֶ�Ҫ��֣�ȥ����߷֣�ȥ����ͷ֣���ƽ����
* 1.vector
* 2.����vector��ȡ��ÿһ��ѡ�֣�forѭ����10���ֱַ�浽deque
* 3.sort�����ȥ����߷ֺ���ͷ�
* 4.deque�������ۼ��ܷ�
* 5.��ȡƽ����
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
		string name = "ѡ��";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);

		//��������person�������������
		vec.push_back(p);
	}
}

void setScore(vector<Person>& vec) {
	for (vector<Person> ::iterator it = vec.begin(); it != vec.end(); it++) {
		//������ί����
		deque<int> d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 40 + 60; //rand() % 40Ϊ0-39
			d.push_back(score);
		}
		/*		����Ĵ�����
		cout << it->m_Name << "  " ;
		for (deque<int> ::iterator dit = d.begin(); dit != d.end(); dit++) {
			cout << *dit << " " ;
		}
		cout << endl;
		*/


		sort(d.begin(), d.end());
		//ȥ����߷֣�ȥ����ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int> ::iterator dit = d.begin(); dit != d.end(); dit++) {
			sum += *dit;
		}
		int avg = sum / d.size();

		//��ƽ���ָ��Ƹ�ѡ��
		it->m_Score = avg;
	}
}

void showScore(vector<Person>& vec) {
	for (vector<Person> ::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << it->m_Name << " " << it->m_Score << endl;
	}
}

int main() {
	//���������
	srand((unsigned int)time(NULL));

	vector<Person> vec;
	createPerson(vec);

	/* //����
	for (vector<Person> ::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << (*it).m_Name << "  " << (*it).m_Score << endl;
	}
	*/

	//���
	setScore(vec);
	showScore(vec);

}