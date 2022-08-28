/*GCD(Greatest common devisor): Write a function which takes two integers as argument and find gcd of these integers andreturn it.
You can pass integers at any order. 
Hint: write a loop which executes from 1 to largest digit and find the integerwhich divides both integers.*/
#include<iostream>
using namespace std;
int gcd(int n1,int n2)
{
	int ans;
	for(int c=1;c<=n1&&c<=n2;c++)
	{
		if(n1%c==0&&n2%c==0){
		ans=c;
		
		}
	}
	return ans;
}
int main()
{
	int x,y;
	cout<<"Enter two num =";
	cin>>x>>y;
	cout<<"Greatest common devisor =" <<gcd(x,y)<<endl;
	return 0;
}

