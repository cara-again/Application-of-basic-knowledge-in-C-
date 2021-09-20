/*10个员工：ABCDEFGHIJ，指派部门
* 员工信息：姓名 工资组成； 部门：策划、美术、研发
* 随机分配部门和工资
* multimap进行信息的插入 key（部门编号） value(员工)
* 分部门显示员工信息
*/

/*实现：
* 创建10名员工，放到vector中
* 遍历vector，取出每名员工，随机分组
* 分组后，放入multimap中
* 分部门显示员工信息
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
		staffer.m_Name = "员工";
		staffer.m_Name += nameSeed[i];
		staffer.m_Salary = rand() % 10000 + 10000;

		//将员工放入容器中
		vStaff.push_back(staffer);

	}
}

void setGroup(vector<Staff>& vStaff, multimap<int, Staff>& mStaff) {
	for (vector<Staff> ::iterator it = vStaff.begin(); it != vStaff.end(); it++) {
		//部门随机编号
		int deptID = rand() % 3; //0 1 2

		//员工插入分组
		mStaff.insert(pair<int, Staff>(deptID, *it));//mStaff.insert(make_pair(deptID, *it));


	}
}

void showStaffByGroup(multimap<int, Staff>& mStaff) {
	cout << "CH: " << endl;
	multimap<int, Staff> ::iterator pos = mStaff.find(CH);
	int count = mStaff.count(CH);//统计具体人数
	int index = 0;
	for (; pos != mStaff.end() && index < count; pos++, index++) {
		cout << pos->second.m_Name << "  " << pos->second.m_Salary << endl;
	}
	cout << "------------------------------------" << endl;

	cout << "MS: " << endl;
	pos = mStaff.find(MS);
	count = mStaff.count(MS);//统计具体人数
	index = 0;
	for (; pos != mStaff.end() && index < count; pos++, index++) {
		cout << pos->second.m_Name << "  " << pos->second.m_Salary << endl;
	}
	cout << "------------------------------------" << endl;

	cout << "YF: " << endl;
	pos = mStaff.find(YF);
	count = mStaff.count(YF);//统计具体人数
	index = 0;
	for (; pos != mStaff.end() && index < count; pos++, index++) {
		cout << pos->second.m_Name << "  " << pos->second.m_Salary << endl;
	}
	
}

int main() {
	srand((unsigned int)time(NULL));//随机数种子

	//创建员工
	vector<Staff> vStaff;
	CreateStaff(vStaff);


	//员工分组
	multimap<int, Staff> mStaff;
	setGroup(vStaff, mStaff);

	//测试
	for (vector<Staff> ::iterator it = vStaff.begin(); it != vStaff.end(); it++) {
		cout << it->m_Name << "  " << it->m_Salary << endl;
	}
	cout << endl;

	//分组显示
	showStaffByGroup(mStaff);
		
}
