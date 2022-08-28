#include<iostream>
#include<cstring>
using namespace std;
class student
{
	public:
		string RegNumber;
		string Name;
		string Semester;
		string Degree;
		string Department; 
		float CGPA;
};
int main()
{
	student obg1;
	student obg2;
	student obg3;
	obg1.RegNumber="21-NTU-CS-1258";
	obg1.Name="Muhammad Faizan";
	obg2.Semester="Second";
	obg2.Degree="BS Computer Science";
	obg2.Department="Computer Science";
	obg3.CGPA=3.33;
	//output
	cout<<"RegNumber: "<<obg1.RegNumber<<endl;
	cout<<"Name: "<<obg1.Name<<endl;
	cout<<"Semester: "<<obg2.Semester<<endl;
	cout<<"Degree: "<<obg2.Degree<<endl;
	cout<<"Department: "<<obg2.Department<<endl;
	cout<<"CGPA: "<<obg3.CGPA<<endl;
}
