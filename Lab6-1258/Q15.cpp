/*Write a function multiple with two integer arguments and bool return type. The functions check whether first integer is
multiple of second if yes return 1 else return 0. Use this function in main in the if condition*/
#include<iostream>
using namespace std;
bool check(int arg1,int arg2){
	if(arg1%arg2==0)
	{
		return true;
	}
	else{
		return false;
	}
}
int main()
{
	int x,y;
	cout<<"Enter two number =";
	cin>>x>>y;
	cout<<check(x,y);
	cout<<endl;
	return 0;
}

