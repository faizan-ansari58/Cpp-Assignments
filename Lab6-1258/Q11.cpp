//Write a function which take theradius of circle and return the area of circle
#include<iostream>
using namespace std;
float area( float n1)
{
	const float pi=3.14;
	return (pi*n1*n1);
}
int main()
{
	float r;
	cout<<"Enter radius =";
	cin>>r;
	cout<<"Area of circle ="<<area(r)<<endl;
	system("pause");
	return 0;
}

