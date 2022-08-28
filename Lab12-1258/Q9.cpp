
#include<iostream>
#include<cstring>
using namespace std;
class Students {
private:
	char RegNumber[30];
	char Name[30];
	int Semester = 0;
	char Degree[30];
	char Department[30];
	float Gpa = 0.0;
public:
	// Functions of Reg Number //
	void set_reg_number()
	{	
		cout << "Enter Reg Number: ";
		cin.getline(RegNumber, 30);
	}
	void get_reg_number()
	{
		cout << "\nThe Reg Number is: " << RegNumber << endl;
	}
	// Functions of Name //
	void set_name()
	{
		cout << "Enter Name of Student: ";
		cin.getline(Name, 30);
	}
	void get_name()
	{
		cout << "\nThe Name is: " << Name << endl;
	}
	// Functions of Semester //
	void set_semester()
	{
		cout << "Enter Number of Semester: ";
		cin >> Semester;
		cin.ignore();
	}
	void get_semester()
	{
		cout << "\nThe Semester is: " << Semester << endl;
	}
	// Functions of Degree //
	void set_degree()
	{
		cout << "Enter the Degree: ";
		cin.getline(Degree, 30);
	}
	void get_degree()
	{
		cout << "\nThe Degree is: " << Degree << endl;
	}
	// Functions of Department //
	void set_department()
	{
		cout << "Enter the Department: ";
		cin.getline(Department, 30);
	}
	void get_department()
	{
		cout << "\nThe Department is: " << Department << endl;
	}
	// Functions of GPA //
	void set_gpa()
	{
		cout << "Enter the GPA: ";
		cin >> Gpa;
		cin.ignore();
	}
	void get_gpa()
	{
		cout << "\nThe GPA is: " << Gpa << endl;
	}
	// Functions of Display //
	void display()
	{
		get_reg_number();
		get_name();
		get_semester();
		get_degree();
		get_department();
		get_gpa();
	}
};
void line()
{
	for (int i = 0; i < 20; i++)
	{
		cout << "---";
	}
}
int main()
{
	Students s1, s2;
	// Input Info of Object 1 //
	cout << endl;
	line();
	cout << endl;
	s1.set_reg_number();
	cout << endl;
	s1.set_name();
	cout << endl;
	s1.set_semester();
	cout << endl;
	s1.set_degree();
	cout << endl;
	s1.set_department();
	cout << endl;
	s1.set_gpa();
	cout << endl;
	// Display Info of Object 1 //
	line();
	s1.display();
	cout << "\n" << endl;
	// Input Info of Object 2 //
	cout << endl;
	line();
	cout << endl;
	s2.set_reg_number();
	cout << endl;
	s2.set_name();
	cout << endl;
	s2.set_semester();
	cout << endl;
	s2.set_degree();
	cout << endl;
	s2.set_department();
	cout << endl;
	s2.set_gpa();
	cout << endl;
	// Display Info of Object 2 //
	line();
	s2.display();
	cout << endl;	
	cout << endl;
	system("pause>0");
	return 0;
}
