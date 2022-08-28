#include<iostream>
using namespace std;
void rectangle(int *num, char *ch)
{
	for(int i=1;i<=*num;i++)
	{
		for(int j=0;j<=*num;j++)
		{
			cout<<*ch;
		}
		cout<<endl;
	}
}
int main()
{
	int num;
	char ch;
	cout<<"Enter a integer for size: ";
	cin>>num;
	cout<<"Enter a character: ";
	cin>>ch;
	cout<<"===================="<<endl;
	rectangle(&num,&ch);
}
