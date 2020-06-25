#include<iostream>

using namespace std;

class calc
{
public:
	float a,b,result;
	char c;

	void read()
	{
		cout <<"Enter your expressing in the form (x*y) : ";
		cin >> a >> c >> b;
	}

	float add()
	{
		return a+b;
	}

	float sub()
	{
		return a-b;
	}

	float product()
	{
		return a*b;
	}

	float divide()
	{
		return a/b;
	}
};

int main()
{
	calc a1;
	a1.read();
	char z;

	do{

	switch(a1.c)
	{
		case '+' : a1.result=a1.add();break;

		case '-' : a1.result=a1.sub();break;

		case '*' : a1.result=a1.product();break;

		case '/' : a1.result=a1.divide();break;

		default : cout <<"Expression entered is not in proper format \n ";
	}

	cout <<"The Result of "<<a1.a<<a1.c<<a1.b<<" is "<<a1.result<<endl<<endl;
	cout << "Do you want to continue ?(Y/N) : ";
	cin >> z;
	cout<<endl;

	if(z=='y')
		{a1.read();}
	}while(z=='y');

	return 0;
}