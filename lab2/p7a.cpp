#include<iostream>

using namespace std;

//Single Level-Inheritance.

class student
{
public:
	string name;
	int reg;
	int age;
	string gender;
	string branch;
	int sem;

	void read();

	void display();
};

void student :: read()
{
	cout<<"Enter the name : ";
	cin>>name;

	cout<<"Enter the registration no. : ";
	cin>>reg;

	cout<<"Enter the age : ";
	cin>>age;

	cout<<"Enter the gender : ";
	cin>>gender;

	cout<<"Enter the branch : ";
	cin>>branch;

	cout<<"Enter the curret studying semister : ";
	cin>>sem;
}

void student :: display()
{
	cout<<"Name of student is "<<name<<endl;
	cout<<"registration no. is "<<reg<<endl;
	cout<<"Students age is "<<age<<endl;
	cout<<"Gender is "<<gender<<endl;
	cout<<"branch is "<<branch<<endl;
	cout<<"Semister is "<<sem<<endl;
}

class StudentResultInfo: public student
{
public:
	float total;
	float per;
	char grade;

	void readStudentInfo();
	void DisplayInfo();
};

void StudentResultInfo::readStudentInfo()
{
	cout<<"Enter the Total marks of Student (out of 100) : ";
	cin>>total;

	per=total;
}

void StudentResultInfo::DisplayInfo()
{
	if(per<=100&&per>=0)
	{
	cout<<"Total Marks is "<<total<<endl;
	cout<<"Percentage is "<<per<<endl;

	grade='F';

	if(per>=90)grade='A';
	else if(per>=80)grade='B';
	else if(per>=70)grade='C';
	else if(per>=60)grade='D';
	else if(per>=50)grade='E';
	else if(per>=40)cout<<"Just Passed!!";
	else cout<<"FAIL!!";
	cout<<"Grade is "<<grade<<endl;
	}
	else
        cout<<"Invalid Marks Entered";
}


int main()
{
	StudentResultInfo a;

	a.read();
	a.readStudentInfo();
	cout<<"\n\nThe Data of the student is as follows:\n";
	a.display();
	a.DisplayInfo();
	return 0;
}