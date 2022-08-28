#include<iostream>
using namespace std;
int main()
{
	char arr1[3]={'p','q','r'};
	float arr2[3]={1.1,1.2,1.3};
	cout<<"The adress of character 1 is "<<&arr1[0]<<endl;
	cout<<"The adress of character 2 is "<<&arr1[1]<<endl;
	cout<<"The adress of character 3 is "<<&arr1[2]<<endl;
	cout<<"The adress of float 1 is "<<&arr2[1]<<endl;
	cout<<"The adress of float 2 is "<<&arr2[2]<<endl;
	cout<<"The adress of float 3 is "<<&arr2[3]<<endl;
}
