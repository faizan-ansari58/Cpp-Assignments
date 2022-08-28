
#include<iostream>
#include<cstring>
using namespace std;
class TelephoneDirectory
{
private:
	int ID = 0;
	char FirstName[50];
	char LastName[50];
	char Telephone[20];
	char Mobile[20];
	char Email[50];
	char City[50];
public:
	void add_record(TelephoneDirectory*);
	void display_all(TelephoneDirectory*);
	void search_record(TelephoneDirectory*);
};
void line()
{
	for (int i = 0; i < 20; i++)
	{
		cout << "---";
	}
}
void TelephoneDirectory::add_record(TelephoneDirectory* p)
{
	for (int i = 0; i < 10; i++)
	{
		line();
		cout << "\nEnter the ID of " << i + 1 << " Contact: ";
		cin >> p[i].ID;
		cin.ignore();
		cout << "\nEnter the First Name of " << i + 1 << " Contact: ";
		cin.getline(p[i].FirstName, 50);
		cout << "\nEnter the Last Name of " << i + 1 << " Contact: ";
		cin.getline(p[i].LastName, 50);
		cout << "\nEnter the TelePhone Number of " << i + 1 << " Contact: ";
		cin.getline(p[i].Telephone, 20);
		cout << "\nEnter the Mobile Number of " << i + 1 << " Contact: ";
		cin.getline(p[i].Mobile, 20);
		cout << "\nEnter the Email of " << i + 1 << " Contact: ";
		cin.getline(p[i].Email, 50);
		cout << "\nEnter the City of " << i + 1 << " Contact: ";
		cin.getline(p[i].City, 50);
		cout << endl;
	}
}
void TelephoneDirectory::display_all(TelephoneDirectory* a)
{
	for (int i = 0; i < 10; i++)
	{
		line();
		cout << "\n\n\t\tCONTACT " << i + 1 << " INFORMATION\t\t\n" << endl;
		cout << "\nThe ID of " << i + 1 << " Contact is: " << a[i].ID << endl;
		cout << "\nThe First Name of " << i + 1 << " Contact is: " << a[i].FirstName << endl;
		cout << "\nThe Last Name of " << i + 1 << " Contact is: " << a[i].LastName << endl;
		cout << "\nThe Telephone Number of " << i + 1 << " Contact is: " << a[i].Telephone << endl;
		cout << "\nThe Mobile Number of " << i + 1 << " Contact is: " << a[i].Mobile << endl;
		cout << "\nThe Email of " << i + 1 << " Contact is: " << a[i].Email << endl;
		cout << "\nThe City of " << i + 1 << " Contact is: " << a[i].City << endl;
		cout << endl;
	}
	cout << endl;
}
void TelephoneDirectory::search_record(TelephoneDirectory* a)
{
	char search_name[50];
	cin.ignore();
	cout << "\nEnter Name to Search Record of Contact: ";
	cin.getline(search_name, 50);
	for (int i = 0; i < 10; i++)
	{
		if (strcmp(search_name, a[i].FirstName) == 0)
		{
			cout << "\nThe ID of " << i + 1 << " Contact is: " << a[i].ID << endl;
			cout << "\nThe First Name of " << i + 1 << " Contact is: " << a[i].FirstName << endl;
			cout << "\nThe Last Name of " << i + 1 << " Contact is: " << a[i].LastName << endl;
			cout << "\nThe Telephone Number of " << i + 1 << " Contact is: " << a[i].Telephone << endl;
			cout << "\nThe Mobile Number of " << i + 1 << " Contact is: " << a[i].Mobile << endl;
			cout << "\nThe Email of " << i + 1 << " Contact is: " << a[i].Email << endl;
			cout << "\nThe City of " << i + 1 << " Contact is: " << a[i].City << endl;
			cout << endl;
		}
	}
	cout << endl;
}
void menu()
{
	cout << "\n\n\t\tTelePhone   Directory\t\t\n\n";
	cout << "\t\t1.\tAdd Record." << endl;
	cout << "\t\t2.\tDisplay All." << endl;
	cout << "\t\t3.\tSearch Record." << endl;
	cout << "\t\t4.\tExit." << endl;
}
int main()
{
	TelephoneDirectory contact[10];
	int op;
	while (true)
	{
		system("cls");
		menu();
		cout << "\nEnter the Option:" << endl;
		cin >> op;
		switch (op)
		{
		case 1:
		{
			contact->add_record(contact);
			break;
		}
		case 2:
		{
			contact->display_all(contact);
			break;
		}
		case 3:
		{
			contact->search_record(contact);
			break;
		}
		case 4:
		{
			return 0;
		}
		default:
		{
			cout << "\nINVALID OPTION!!" << endl;
		}
		}
		system("pause");
	}
	cout << endl;
	system("pause");
	return 0;
}
