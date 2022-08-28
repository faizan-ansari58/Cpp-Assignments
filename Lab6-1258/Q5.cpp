//Write a function, which takes 5 arguments and print their average. Use this function in main
#include<iostream>
using namespace std;
float avg(float n1,float n2,float n3,float n4,float n5)
{
	float ans=0;
	ans=(n1+n2+n3+n4+n5)/5;
	cout<<"Average is ="<<ans;
return ans;
}
int main(){
	float num1,num2,num3,num4,num5;
	cout<<"Enter the five numbers =";
	cin>>num1>>num2>>num3>>num4>>num5;
	avg(num1,num2,num3,num4,num5);
	cout<<endl;
	system("pause");
	return 0;
}

