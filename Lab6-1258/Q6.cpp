//Write a function, which takes two arguments and print largest. Use ternary operator
#include<iostream>
using namespace std;
void print(int x,int y)
{
	(x>y)?cout<<x<<" is largest":cout<<y<<" is smaller";
	
}
int main(){
	int x,y;
	cout<<"Enter two  num =";
	cin>>x>>y;
	print(x,y);
	return 0;
}

