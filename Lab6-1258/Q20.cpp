//Implement swap function as call by reference
#include<iostream>
using namespace std;
void swap(int x,int y)
{
	int temp;
	temp=x;x=y;
	y=temp;
	cout<<temp<<" has become "<<x<<endl;
	cout<<x<<" has become "<<y<<endl;
}
int main(){
	int num1,num2;
	int &ref1=num1,&ref2=num2;
	cout<<"Enter the number =";
	cin>>num1>>num2;
	swap(ref1,ref2);
	cout<<endl;
	return 0;
}

