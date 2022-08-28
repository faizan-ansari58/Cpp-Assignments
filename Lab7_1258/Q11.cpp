// Questiom No : 11
// Write a template function for swap. Use this function inside main for floats and characters.

#include<iostream>
using namespace std;
template <class abc>
void swap(abc a, abc b)
{
	abc temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"the value of a after awapping is a="<<a<<endl;
	cout<<"the value of b after awapping is b="<<b<<endl;
}
int main()
{    
	
	swap(3.4,5.5);
	cout<<endl;
	swap('s','x');
}
