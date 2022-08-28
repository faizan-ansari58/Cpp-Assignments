//Ask user to enter a character and tell whether it islarge(>=’A’ and <=’Z’)alphabetor smallalphabet
#include<iostream>
using namespace std;
int main()
{
	char character;
	cout<<"Enter any character ";
	cin>>character;
	if(character>='A'and character<='Z')
	{
		cout<<"The given character is large alphabet";
	}
	if(character>='a'and character<='z')
	{
		cout<<"The given character is small alphabet";
	}
	
	return 0;
}
