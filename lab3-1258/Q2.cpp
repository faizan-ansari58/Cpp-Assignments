/*Ask the user to enter radius of the circle and print diameter, circumference and area of the circle.
 Declare the value of piasconst float pi = 3.14159;
 Please note in this statementpiis aconstant value variablewhose value cannot be changed*/
#include<iostream>
using namespace std;
int main()
{
	float radius,diameter,circumference,area;
	
	const float pi=3.14159;
	
	cout<<"Input radius of a circle ";
	cin>>radius;
	
	diameter=2*radius;
	cout<<"Diameter of circle is "<<diameter<<endl;
	
	circumference=2*pi*radius;
	cout<<"Circumference of circle is "<<circumference<<endl;
	
	area=pi*radius*radius;
	cout<<"Area of circle is "<<area<<endl;
	
	return 0;
}
