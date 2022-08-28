//Question No 4
#include<iostream>
using namespace std;
int main()
{
	char arr[1000]={"Save the following string in an array and display it on screen exactly in the same manner:The most likely way for the world to be destroyed,\n    Most experts agree, \‘is by accident’.\n      That\’s where we come in;\n\“We\’re computer professionals. We cause accidents.” Count how many vowels are in the above string"};
	int count,cons;
	for(int i=0;arr[i]!='\0';i++)
	{
		if (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
		{
			count++;
		}
		else
		{
			cons++;
		}
	}
	cout<<"No. of vovels are "<<count<<endl;
	cout<<"No. of consonents are "<<cons;
}
