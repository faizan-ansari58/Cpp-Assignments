
#include<iostream>
using namespace std;
class Computer {
private:
	char brandname[50];
	float speed = 0.0;
	int memorysize = 0;
public:
	void input();
	void output();
};
void Computer::input()
{
	cout << "\nEnter the Brand Name: ";	
	cin.getline(brandname, 50);
	cout << "Enter the Speed: ";
	cin >> speed;
	cout << "Enter the Memory Size: ";
	cin >> memorysize;
	cin.ignore();
}
void Computer::output()
{
	cout << "\nThe Name of the Brand is: " << brandname << endl;
	cout << "The Speed of the Computer is: " << speed << " Ghz" << endl;
	cout << "The Memory Size of the Computer is: " << memorysize << " GB" << endl;
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
	Computer c1[5];
	for (int i = 0; i < 5; i++)
	{
		line();
		c1[i].input();
	}
	for (int i = 0; i < 5; i++)
	{
		line();
		cout << "\nComputer " << i+1 << " Info"<< endl;
		c1[i].output();
	}
	cout << endl;
	system("pause");
	return 0;
}
