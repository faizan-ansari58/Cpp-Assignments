/*Write a function that take two values as argument and then swap the values.Call this function from main by input 
twovariables and pass these variables to this function.Display the values of variables after the function call*/
#include <iostream>
using namespace std;
void swap(int n1,int n2)
{
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<temp<<" swaps to "<<n1<<endl;
	cout<<n1<<" swaps to "<<n2<<endl;
}
int main()
{
	int num_1,num_2;
	cout<<"Enter first number: ";
	cin>>num_1;
	cout<<"Enter second number: ";
	cin>>num_2;
	swap(num_1,num_2);
	return 0;
}
