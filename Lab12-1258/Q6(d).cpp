
#include<iostream>
#include<cstring>	
using namespace std;
struct Teacher {
	int ID = 0;
	char name[50];
	char HQ[100];
	int scale = 0;
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
	cout << "\n----- PART 4 -----\n" << endl;
	Teacher T1[5];
	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		line();
		cout << "\nEnter the " << i+1 << " ID: " << endl;
		cin >> T1[i].ID;
		cin.ignore();
		cout << "\nEnter the  " << i + 1 << " Name: " << endl;
		cin.getline(T1[i].name, 50);
		cout << "\nEnter the  " << i + 1 << " Higest Qualification: " << endl;
		cin.getline(T1[i].HQ, 100);
		cout << "\nEnter the  " << i + 1 << " Scale: " << endl;
		cin >> T1[i].scale;
	}
	line();
	cout << "\n" << endl;
	for (int i = 0; i < 5; i++)
	{
		line();
		cout << "\nThe " << i + 1 << " ID is: " << T1[i].ID << endl;
		cout << "\nThe " << i + 1 << " Name is: " << T1[i].name << endl;
		cout << "\nThe " << i + 1 << " Highest Qualification is: " << T1[i].HQ << endl;
		cout << "\nThe " << i + 1 << " Scale is: " << T1[i].scale << endl;	
	}
	cout << endl;
	system("pause");
	return 0;
}
