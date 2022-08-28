// Questiom No : 7
// Write a template function, which takes 5 arguments and print their average. Use this function in main.

#include<iostream>
using namespace std;
template <class ABC>
void avg(ABC a,ABC b,ABC c,ABC d, ABC e)
{
	cout<<"avg of 5 num is ";
	cout<<(a+b+c+d+e)/5.0;

}
int main()
{
	cout<<"The avg of int numbers "<<endl;
	avg(1,2,3,4,5);
	cout<<"The avg of float numbers "<<endl;
	avg(2.4,5.4,6.6,8.8,6.4);
}
