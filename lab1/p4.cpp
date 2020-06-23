#include<iostream>
using namespace std;

class student
{
public:
	string name;
	int reg;
	string branch;
	int sem;
	void Accept_Data()
	{
		cout << "Enter the name of the student : ";
		getline(cin,name);
		cout << "Enter the registration no. : ";
		cin >> reg;
		cout << "Enter the branch : ";
		cin >> branch;
		cout << "Enter the currently studying Sem : ";
		cin >> sem;
	}

	void DisplayData()
	{
		cout << "\nThe Data of the student is as follows :\n";
		cout << "the name of the student is "<< name << endl;
		cout << "the registration no. is " << reg << endl;
		cout << "the Branch is "<< branch<<endl;
		cout << "sem is "<<sem<<endl;
	}
};

int main()
{
	student a;
	a.Accept_Data();
	a.DisplayData();
	return 0;
}
