#include<iostream>
#include<cstring>
using namespace std;
class Book {
public:
	int ISBN = 0;
	float Price = 0.0;
	char Title[50];
	char MainArea[50];
	char SubArea[100];
	int No_of_pages = 0;
	void input();
	void output();
};
void Book::input()
{
	cout << "Enter the ISBN: " << endl;
	cin >> ISBN;
	cin.ignore();
	cout << "\nEnter the Title: " << endl;
	cin.getline(Title, 50);
	cout << "\nEnter the Main Area: " << endl;
	cin.getline(MainArea, 100);
	cout << "\nEnter the Sub Area: " << endl;
	cin.getline(SubArea, 100);
	cout << "\nEnter the Price: " << endl;
	cin >> Price;
	cout << "\nEnter the No of Pages: " << endl;
	cin >> No_of_pages;
}
void Book::output()
{
	cout << "\nThe ISBN Number is: " << ISBN << endl;
	cout << "\nThe Title of Book is: " << Title << endl;
	cout << "\nThe Main Area of Book is: " << MainArea << endl;
	cout << "\nThe Sub Area of Book is: " << SubArea << endl;
	cout << "\nThe Price of Book is: " << Price << endl;
	cout << "\nThe No. Of Pages are: " << No_of_pages << endl;
}
void line()
{
	for (int i = 0; i < 20; i++)
	{
		cout << "---";
	}
}
int main()
{
	Book b1;
	b1.input();
	line();
	b1.output();
	cout << endl;
	system("pause>0");
	return 0;
}
