//Question No 2
#include<iostream>
using namespace std;
int main()
{
	char arr[300]={"The most likely way for the world to be destroyed,\n    Most experts agree, \‘is by accident’.\n      That\’s where we come in;\n\“We\’re computer professionals. We cause accidents.”"};
	int count;
	for(int i=0;arr[i]!='\0';i++)
	{
		if (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
		{
			count++;
		}
	}
	cout<<"No of vovels are "<<count;
}
