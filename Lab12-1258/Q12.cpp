
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
	cout << "\nEnter the Brand Name: " << endl;
	cin.getline(brandname, 50);
	cout << "\nEnter the Speed: " << endl;
	cin >> speed;
	cout << "\nEnter the Memory Size: " << endl;
	cin >> memorysize;
}
void Computer::output()
{
	cout << "\nThe Name of the Brand is: " << brandname << endl;
	cout << "\nThe Speed of the Computer is: " << speed << " Ghz" << endl;
	cout << "\nThe Memory Size of the Computer is: " << memorysize << " GB" << endl;
}
int main()
{
	Computer *c1 = new Computer;
	c1->input();
	cout << endl;
	c1->output();
	cout << endl;
	system("pause");
	return 0;
}
