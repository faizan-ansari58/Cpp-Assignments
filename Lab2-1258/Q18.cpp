//Name: Muhammad Faizan
//Reg No: 21-NTU-CS-1258
//Lab No: 2
//Question No: 18
#include <iostream>
using namespace std;
int main()
{
	int num,a;
	cout<<"Enter four digit number ";
	cin>>num;
	while(num!=0){
		a=a*10;
		a=a+num%10;
		num=num/10;
	}
	cout<<"The number in reverse order is "<<a<<endl;
	if(a%2==0){
		cout<<"The number is even";
	}
	if(a%2!=0){
		cout<<"The number is odd";
	}
	return 0;
}
//declare the scope in int
//take input of number from user
//apply the condition to find reverse
//apply the condition to check wether the number is even or odd
