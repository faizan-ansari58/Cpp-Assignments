#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class employee
{
	int EmployeeID;
	char First_Name[30];
	char Last_Name[30];
	char Designation[30];
	long long Phone_Number;
	public:
	employee(){
		EmployeeID = 0;
	}
	employee(int a, char *b, char *c, char *d, long long f){
		EmployeeID = a;
		strcpy(First_Name, b);
		strcpy(Last_Name, c);
		strcpy(Designation, d);
		Phone_Number = f;
	}
	void set(int e, char *g, char *h, char *i, long long j)
	{
		EmployeeID =e;
		strcpy(First_Name, g);
		strcpy(Last_Name, h);
		strcpy(Designation, i);
		Phone_Number = j;
	}
	void show()
	{
		cout<<left<<setw(18)<<EmployeeID;
		cout<<left<<setw(18)<<First_Name;
		cout<<left<<setw(18)<<Last_Name;
		cout<<left<<setw(18)<<Designation;
		cout<<left<<setw(18)<<Phone_Number<<endl;
	}
	char* GetName(void)
	{
		return First_Name;
	}
	int GetID(void)
	{
		return EmployeeID;
	}
};
void search(employee a[])
{
	char b[30];
	int count=0;
	cout<<"Enter the first name of employee you want to see record : ";
	cin>>b;
	cout<<endl<<"The record of employee : "<<b<<endl<<endl;
	cout<<left<<setw(18)<<"ID"<<setw(18)<<"First Name"<<setw(18)<<"Last Name"<<setw(18)<<"Designation"<<setw(18)<<"Phone Number"<<endl<<endl;
	for(int i=0; i<10; i++)
	{
		if(strcmp(a[i].GetName(), b)==0)
		{	
			a[i].show();
				count++;
		}
	}
	if(count==0)
		cout<<"NO Exist!";	
}
int main()
{
	employee ep[10];
	int a;
	char n1[30], n2[30], d[30];
	long long e;
	for(int i=0; i<10; i++)
	{
		cout<<"Enter Employee ID          : ";
		cin>>a;
		cout<<"Enter Employee First Name  : ";
		cin>>n1;
		cout<<"Enter Employee Last Name   : ";
		cin>>n2;
		cout<<"Enter Employee Designation : ";
		cin>>d;
		cout<<"Enter Employee Phone Number: ";
		cin>>e;
		ep[i].set(a, n1, n2, d, e);
		cout<<"\n------------------------------------------------\n"<<endl;
	}
	cout<<left<<setw(18)<<"ID"<<setw(18)<<"First Name"<<setw(18)<<"Last Name"<<setw(18)<<"Designation"<<setw(18)<<"Phone Number"<<endl;
	for(int i=0; i<10; i++)
	{
		ep[i].show();
	}
	cout<<"\n________________________________________________________________________\n"<<endl;
	search(ep);
}
