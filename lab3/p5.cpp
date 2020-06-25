#include<iostream>

using namespace std;

class tollbooth
{
public:
	unsigned int a;
	double amt;

	tollbooth()
	{
		a=0;
		amt=0.0;
	}

	void PayingVehicles()
	{
		a++;
		amt+=50;
	}

	void NonPayingVehicles()
	{
		a++;
		amt+=0;
	}

	void DisplayCashCollected()
	{
	    cout<<"No.of Cars passed : "<<a<<endl;
		cout<<"Cash Collected is "<<amt<<endl;
	}


};

int main()
{
	int x;
	tollbooth t;
	cout<<"Enter a no. :\n0) 4 wheeler vehicle.\n1) nonpaying vehicle \n2) exit."<<endl;
	cin>>x;
	if(x==2)
	{

	}
	else
	{
		for(int i=1;;i++)
		{
			switch(x)
			{
				case 0 : t.PayingVehicles();break;
				case 1 : t.NonPayingVehicles();break;
				default : cout<<"Enter a Valid no."<<endl;
			}

			cout<<"Enter a no. :";
			cin>>x;

			if(x==2)
			{
				break;
			}
		}
	}
	t.DisplayCashCollected();
	return 0;
}
