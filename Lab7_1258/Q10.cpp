// Questiom No : 10
// Write a template function which take the radius of circle and return the area of circle

#include<iostream>
using namespace std;
template <class ABC>
void rad(ABC r)
{

	ABC A;
	A=3.14*r*r;
	cout<< A;
}
int main()
{

	cout<<"the area of circle is ";
	rad(22.5);
	
}
