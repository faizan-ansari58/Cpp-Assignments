//Name: Muhammad Faizan
//Reg No: 21-NTU-CS-1258
//Lab No: 2
//Question No: 6
#include <iostream>
using namespace std;
int main()
{
	float a=3.2, b=4.4;
	cout<<"Before swapping"<<endl;
	cout<<"a = "<<a<<",  b = "<<b<<endl;
	//Now Swapping the variables
	float temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"After Swapping"<<endl;
	cout<<"a = "<<a <<",  b = "<<b;
	return 0;
}

