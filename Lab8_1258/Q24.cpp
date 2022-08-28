//  Question No: 24
/*n Fibonacci series, next number is calculated by adding previous two numbers. 0, 1, 1, 2, 3, 5, 8, 13… Ask the user to enter
the bound and show Fibonacci numbers up to that bound. For example, if user enters 60 then your program will save in an
array 0, 1, 1, 2, 3, 5, 8, 13, 21, 35, 56.*/
#include<iostream>
using namespace std;
int main(){
	int bound;
	cout<<"please enter bound: ";
	cin>>bound;
	int fib[100]={0};
	int firstnumber,secondnumber,thirdnumber;
	firstnumber=0;
	secondnumber=1;
	int start=0;
	while(firstnumber<bound){
		fib[start]=firstnumber;
		thirdnumber=firstnumber+secondnumber;
		firstnumber=secondnumber;
		secondnumber=thirdnumber;
		start++;
	}
	cout<<"fabonaci series is: ";
	for(int start=0;start<=100;start++){
		if(fib[start]==0&&start!=0){
			break;
		}
		cout<<" "<<fib[start];
	}
	return 0;
}

