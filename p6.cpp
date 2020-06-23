#include<iostream>

using namespace std;

class complex
{
public:
	int a,b;
	void operator ++()
	{
		a=a+1;
		b=b+1;
	}

	void operator --()
	{
		a=a-1;
		b=b-1;
	}

	void display()
	{
		cout << a << " + " << b << "i "<<endl;
	}
};

int main()
{
	complex c1;

	cout << "Enter a complex no. in form a+ib: ";
	cin >> c1.a >>c1.b;
	++c1;
	c1.display();
	--c1;
	--c1;
	c1.display();
	return 0;
}
