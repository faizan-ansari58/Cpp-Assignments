
#include<iostream>
#include<cstring>
using namespace std;
struct Teacher {
	int ID = 0;
	char name[50];
	char HQ[100];
	int scale = 0;
};
int main()
{
	cout << "\n----- PART 2 -----\n" << endl;
	Teacher *T1, t1;
	T1 = &t1;
	T1->ID = 1001;
	strcpy(T1->name, "asdf fs");
	strcpy(T1->HQ, "BSCS");
	T1->scale = 18;
	cout << "\nThe ID is: " << T1->ID << endl;
	cout << "\nThe Name is: " << T1->name << endl;
	cout << "\nThe Highest Qualification is: " << T1->HQ << endl;
	cout << "\nThe Scale is: " << T1->scale << endl;
	cout << endl;
	system("pause");
	return 0;
}
