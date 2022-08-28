#include<iostream>
using namespace std;
struct Teacher {
	int ID = 0;
	char name[50];
	char HQ[100];
	int scale = 0;
};
void input(Teacher& a)
{
	cout << "Enter the ID: " << endl;
	cin >> a.ID;
	cin.ignore();
	cout << "\nEnter the Name: " << endl;
	cin.getline(a.name, 50);
	cout << "\nEnter the Higest Qualification: " << endl;
	cin.getline(a.HQ, 100);
	cout << "\nEnter the Scale: " << endl;
	cin >> a.scale;
}
void output(Teacher b)
{
	cout << "\nThe ID is: " << b.ID << endl;
	cout << "\nThe Name is: " << b.name << endl;
	cout << "\nThe Highest Qualification is: " << b.HQ << endl;
	cout << "\nThe Scale is: " << b.scale << endl;
}
int main()
{
	cout << "\n----- PART 1 -----\n\n" << endl;
	Teacher T1	;
	input(T1);
	output(T1);
	cout << endl;
	system("pause");
	return 0;
}
