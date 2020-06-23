#include<iostream>

using namespace std;

int main()
{
	float BP , GP ;
	cout << "Please enter the BP of the employee : ";
	cin >> BP;
	GP = BP + (0.4*BP) + (0.2*BP);
	cout << "The Gross Pay(GP) Of the employee having Basic Pay(BP) as " << BP << " is " << GP << " ." <<endl;
	return 0;
}