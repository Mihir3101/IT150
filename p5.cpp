
#include<iostream>
using namespace std;

class tam
{
public:
	int h,m,s;

	tam()
	{
		h=m=s=0;
	}

	tam(int a,int b,int c)
	{
		h=a;m=b;s=c;
	}

	void display()
	{
		cout<<"Time is "<< h << ":" << m << ":" << s <<endl;
	}


};

int main()
{
	tam a(12,15,45);
	a.display();
	return 0;
}
