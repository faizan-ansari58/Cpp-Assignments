//Name: Muhammad Faizan
//Reg No: 21-NTU-CS-1258
//Lab No: 2
//Question No: 12
#include <iostream>
using namespace std;
int main()
{
	//declare the input number as a in int
	int a;
	cout<<"Input a five digit number ";
	cin>>a;
	cout<<a/10000<<"	";
	a=a%10000;
	cout<<a/1000<<"	";
	a=a%1000;
	cout<<a/100<<"	";
	a=a%100;
	cout<<a/10<<"	";
	a=a%10;
	cout<<a<<endl;
}
