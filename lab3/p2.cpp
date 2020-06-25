#include<iostream>

using namespace std;

class complex
{
public:
	int real,img;

	void read()
	{
		cout<<"Enter the real part of the complex no. : ";
		cin>>real;
		cout<<"Enter the imaginary part of the complex no. : ";
		cin>>img;
	}

complex operator +(complex x)
{
	complex res;

	res.real=real+x.real;
	res.img=img+x.img;
	return res; 
}
	void display()
	{
		cout<<"The sum of the complex nos. is "<<real<<" + "<<img<<"i"<<endl;
	}
};

int main()
{
	complex a,b,c;
	a.read();
	b.read();
	c=a+b;
	c.display();
	return 0;
}