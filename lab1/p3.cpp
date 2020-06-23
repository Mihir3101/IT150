	#include<iostream>
using namespace std;

class area
{
public:
	float r,l,b,base,alt,Area;
	void circle()
	{
		cout << "Enter the radius of the circle : ";
		cin >> r;
		Area=3.14*r*r;
		cout << "\nArea of circle is " << Area <<endl<<endl;
	}

	void rect()
	{
		cout << "Enter the length and breadth of the rectangle respt. : ";
		cin >> l >> b;
		Area=l*b;
		cout << "\nArea of rectangle is " << Area<<endl<<endl;
	}

	void triangle()
	{
		cout << "Enter the altitude and base length of the triangle respt. : ";
		cin >> alt >> base;
		Area=0.5*alt*base;
		cout<< "\nThe Area of the triangle is "<<Area<<endl<<endl;
	}
};

int main()
{
	int a;
	area a1;
	cout << "1)Area of circle.\n2)Area of rectangle.\n3)Area of triangle.\n0)exit\nEnter your choice : ";
	cin >> a;

	for(;a!=0;)
    {
        if(a>3||a<0)
        {
            a=-1;
        }
	switch(a)
	{
		case 1 : a1.circle();break;
		case 2 : a1.rect();break;
		case 3 : a1.triangle();break;
		case -1: cout<<"\nEnter a valid no.\n\n";
		default : cout << "Error";
	}
	cout << "1)Area of circle.\n2)Area of rectangle.\n3)Area of triangle.\n0)exit\nEnter your choice : ";
	cin >> a;
    }
	return 0;
}
