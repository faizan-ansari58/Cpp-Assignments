// Questiom No : 8
// Write a template function, which takes 5 arguments and return their addition. Use this function in main.

#include<iostream>
using namespace std;
template <class ABC>
void sum(ABC a,ABC b,ABC c,ABC d, ABC e)
{
	cout<<"sum of 5 num is ";
	cout<<(a+b+c+d+e)<<endl;

}
int main()
{
	cout<<"The sum of int numbers "<<endl;
	sum(1,2,3,4,5);
	cout<<"The sum of float numbers "<<endl;
	sum(2.4,5.4,6.6,8.8,6.4);
}
