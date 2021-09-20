/*10��Ա����ABCDEFGHIJ��ָ�ɲ���
* Ա����Ϣ������ ������ɣ� ���ţ��߻����������з�
* ������䲿�ź͹���
* multimap������Ϣ�Ĳ��� key�����ű�ţ� value(Ա��)
* �ֲ�����ʾԱ����Ϣ
*/

/*ʵ�֣�
* ����10��Ա�����ŵ�vector��
* ����vector��ȡ��ÿ��Ա�����������
* ����󣬷���multimap��
* �ֲ�����ʾԱ����Ϣ
*/

# include <iostream>
# include <string>
# include <vector>
# include <map>
# include <ctime>

# define CH 0
# define MS 1
# define YF 2


using namespace std;

class Staff {
public:
	string m_Name;
	int m_Salary;

	//Staff(string name, int salary) {
	//	m_Name = name;
	//	m_Salary = salary;
	//}
};

void CreateStaff(vector<Staff>& vStaff) {
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++) {
		Staff staffer;
		staffer.m_Name = "Ա��";
		staffer.m_Name += nameSeed[i];
		staffer.m_Salary = rand() % 10000 + 10000;

		//��Ա������������
		vStaff.push_back(staffer);

	}
}

void setGroup(vector<Staff>& vStaff, multimap<int, Staff>& mStaff) {
	for (vector<Staff> ::iterator it = vStaff.begin(); it != vStaff.end(); it++) {
		//����������
		int deptID = rand() % 3; //0 1 2

		//Ա���������
		mStaff.insert(pair<int, Staff>(deptID, *it));//mStaff.insert(make_pair(deptID, *it));


	}
}

void showStaffByGroup(multimap<int, Staff>& mStaff) {
	cout << "CH: " << endl;
	multimap<int, Staff> ::iterator pos = mStaff.find(CH);
	int count = mStaff.count(CH);//ͳ�ƾ�������
	int index = 0;
	for (; pos != mStaff.end() && index < count; pos++, index++) {
		cout << pos->second.m_Name << "  " << pos->second.m_Salary << endl;
	}
	cout << "------------------------------------" << endl;

	cout << "MS: " << endl;
	pos = mStaff.find(MS);
	count = mStaff.count(MS);//ͳ�ƾ�������
	index = 0;
	for (; pos != mStaff.end() && index < count; pos++, index++) {
		cout << pos->second.m_Name << "  " << pos->second.m_Salary << endl;
	}
	cout << "------------------------------------" << endl;

	cout << "YF: " << endl;
	pos = mStaff.find(YF);
	count = mStaff.count(YF);//ͳ�ƾ�������
	index = 0;
	for (; pos != mStaff.end() && index < count; pos++, index++) {
		cout << pos->second.m_Name << "  " << pos->second.m_Salary << endl;
	}
	
}

int main() {
	srand((unsigned int)time(NULL));//���������

	//����Ա��
	vector<Staff> vStaff;
	CreateStaff(vStaff);


	//Ա������
	multimap<int, Staff> mStaff;
	setGroup(vStaff, mStaff);

	//����
	for (vector<Staff> ::iterator it = vStaff.begin(); it != vStaff.end(); it++) {
		cout << it->m_Name << "  " << it->m_Salary << endl;
	}
	cout << endl;

	//������ʾ
	showStaffByGroup(mStaff);
		
}
