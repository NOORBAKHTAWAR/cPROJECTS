#include<iostream>
#include "Circle.h"
using namespace std;
int main()
{
	double radius;
	cout << "Hello World " << endl;
	cout << "Enter the radius of circle " << endl;
	cin >> radius;
	cout << " The area of circle is " << CircleArea(radius);
	cout << endl;
	cout<<"It is now published on github ";
	system("pause");

	return 0;
}
