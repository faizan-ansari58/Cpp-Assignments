//Write a function whichinput a character and tells whether it is a small letter of large letter and not a letter
#include <iostream>
using namespace std;
void letter();
int main()
{
	letter();
	return 0;
}
void letter()
{
	char c;
	cout<<"Enter the character: ";
	cin>>c;
	if(c>='A'&&c<='Z')
	{
		cout<<"It is capital Letter";
	}
	else if(c>='a'&&c<='z')
	{
		cout<<"It is small Letter";
	}
	else
	{
		cout<<"It is not a Letter";
	}
}
