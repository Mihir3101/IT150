#include<iostream>

using namespace std;

//hierarchical-level inheritance...

class student
{
public:
	string name;
	int age;
	string gender;

	void read1();
	void display1();
};

void student :: read1()
{
	cout<<"Enter the name : ";
	cin>>name;

	cout<<"Enter the age : ";
	cin>>age;

	cout<<"Enter the gender : ";
	cin>>gender;
}

void student :: display1()
{
    cout<<"\n=================================================\n\nThe data of the student is as follows : \n"<<endl;
	cout<<"Name of student is "<<name<<endl;
	cout<<"Students age is "<<age<<endl;
	cout<<"Gender is "<<gender<<endl;

}

class studentNitk: public student
{
public:
	int reg;
	string branch;
	int sem;

	void read2();

	void display2();

};

void studentNitk::read2()
{

	cout<<"Enter the registration no. : ";
	cin>>reg;

	cout<<"Enter the branch : ";
	cin>>branch;

	cout<<"Enter the curret studying semister : ";
	cin>>sem;
}

void studentNitk::display2()
{
	cout<<"registration no. is "<<reg<<endl;
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
        cout<<"Invalid Marks Entered"<<endl;
}


int main()
{
	StudentResultInfo a;
	studentNitk b;

	a.read1();
	b.read2();
	a.readStudentInfo();
	a.display1();
	b.display2();
	a.DisplayInfo();
	return 0;
}
