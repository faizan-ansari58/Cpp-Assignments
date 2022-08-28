#include<iostream>
#include<cstring>
using namespace std;
class student
{
	public:
		string Name;
		string Department; 
		int Age;
};
int main()
{
	student obg1;
	student obg2;
	obg1.Name;
	obg2.Department;
	obg2.Age;
	//output
	cout<<"Name: ";
	cin>>obg1.Name;
	cout<<"Department: ";
	cin>>obg2.Department;
	cout<<"Age: ";
	cin>>obg2.Age;
	cout<<"======================"<<endl;
	cout<<"Name of employee: "<<obg1.Name<<endl;
	cout<<"Department of employee: "<<obg2.Department<<endl;
	cout<<"Age of employee: "<<obg2.Age;
	return 0;
}
