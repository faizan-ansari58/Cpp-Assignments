#include<iostream>
#include<fstream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	ifstream fh("Sample.txt");
	char line[200][10];
	if(!fh)
	{
		cout<<"File could not be opened."<<endl;
	}
	char r[50], c[50], g[50];
	int a, d;
	do
	{
		cout<<"Enter the word you want to Replace : ";
		cin>>c;
		cout<<"\nEnter the word you want to Replace with for same size with \""<<c<<"\" : ";
		cin>>r;
	}while(strlen(c)!=strlen(r));
	int b=0, x=0;
	cout<<"\n\n===================================Before Swaping the word=========================\n\n";
	while(fh>>g)
	{
		if(strcmp(c,g)==0)
		{
			b++;
		}
		x++;
		cout<<g<<" ";
	}
	fh.close();
	if(b==0)
		cout<<"\n\nThe word \""<<c<<"\"  exists in the \"Sample.txt\""<<endl;
	else
		cout<<"\n\nThe word \""<<c<<"\" does not exists in the \"Sample.txt\""<<endl;
		ifstream fileh("Sample.txt");
		if(!fileh)
		{
			cout<<"File could not be opened."<<endl;
		}
		cout<<"\n\n===================================After Swaping the word=========================\n\n";
		while(!fileh.eof())
		{
			for(int i=0; i<x; i++)
			{
				fileh>>line[i];
			}
		}
		fileh.close();
		for(int i=0; i<x; i++)
		{
			if(strcmp(line[i], c)==0)
			{
				strcpy(line[i], r);
			}
			cout<<line[i]<<" ";
		}
	ofstream hfil("Sample.txt");
	if(!hfil)
	{
		cout<<"File could not be opened."<<endl;
	}
	for(int i=0; i<x; i++)
	{
		hfil<<line[i]<<" ";
	}
	cout<<endl<<endl;
	}
		

