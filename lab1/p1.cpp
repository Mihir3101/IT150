#include<iostream>

using namespace std;

int main()
{
	float Fahrenheit,Celcius;
	cout << "Please enter the temperature in Fahrenheit : ";
	cin >> Fahrenheit;
	Celcius=((Fahrenheit-32)*5)/9;
	cout << "temperature in Celcius is "<< Celcius<<" degree" << endl;
	return 0;
}

