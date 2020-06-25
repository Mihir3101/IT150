#include<iostream>

using namespace std;

class date
{
public:
	int year;
	int month;
	int dat;

	void readDate()
	{
		cout<<"\nyear : ";
		cin>>year;
		cout<<"month : ";
		cin>>month;
		cout<<"date : ";
		cin>>dat;
	}

	void displayDate()
	{
		cout << dat <<"/"<<month<<"/"<<year<<endl;
	}
};

class patient : public date
{
public:
	string name;
	string disease;
	date DOA;
	date DOD;

	
};


class age : public patient
{
public:
	int Age;

	void read();
	void display();
};

void age :: read()
{
	cout<<"Enter the name of the patient : ";
	cin>>name;
	cout<<"Enter the Date of admission : ";
	DOA.readDate();
	cout<<"Enter the Disease you are suffering from : ";
	cin>>disease;
	cout<<"Enter the Date of discharge : ";
	DOD.readDate();
	cout<<"Enter Age : ";
	cin>>Age;
}

void age::display()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Date of Admission : ";
	DOA.displayDate();
	cout<<"Disease : "<<disease<<endl;
	cout<<"Date of Discharge : ";
	DOD.displayDate();
	cout<<"Age : "<<Age<<endl<<endl;
}

int main()
{
	int n;
	cout <<"entre the no. of Patients : ";
	cin >> n;

	age p[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\n~~~~~~~~~~~~\n";
		p[i].read();
	}

	cout<<"\n===================================================================\n\nData of the paediatric Patients :\n\n";

	for(int i=0;i<n;i++)
	{
		if(p[i].Age<12)
		{
			p[i].display();
		}
	}
	return 0;
}