#include<iostream>

using namespace std;

class shape
{
public:
	double a;
	double b;

	void getdata();
};

void shape :: getdata()
{
	cout<<"Enter any two double type no. : ";
	cin>>a>>b;

}

class rectangle : public shape
{
public:
	void display()
	{
		cout<<"Area of rectangle is "<<a*b<<endl;
	}
};

class triangle : public shape
{
public:
    void display()
	{
		cout<<"Area of the Triangle is "<<(0.5*a*b)<<endl;
	}
};

int main()
{
	rectangle r;
	triangle t;
	r.getdata();
	t.getdata();
	r.display();
	t.display();
	return 0;
}
