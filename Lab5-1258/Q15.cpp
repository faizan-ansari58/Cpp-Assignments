//Implement afunction namedTenSpace which on call displays ten spaceson console
#include <iostream>
using namespace std;
void tenspace();
int main()
{
	tenspace();
	return 0;
}
void tenspace()
{
	cout<<".";
	for(int i=1;i<=10;i++)
	{
		cout<<" ";
	}
	cout<<".";
}
