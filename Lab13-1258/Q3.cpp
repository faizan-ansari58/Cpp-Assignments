#include<iostream>
#include<cstring>
using namespace std;
class house
{
	int length;
	int width;
	int rooms;
	int bathrooms;
	char furnished[10];
	public:
		void len(int a)
		{
			length=a;
		}
		void wid(int b)
		{
			width=b;
		}
		void room(int c)
		{
			rooms=c;
		}
		void bathroom(int d)
		{
			bathrooms=d;
		}
		void furnish(char *e)
		{
			strcpy(furnished, e);
		}
		house()
		{
			length=100;
			width=100;
			rooms=5;
			bathrooms=6;
			strcpy(furnished,"Yes");
		}
		house(int a,int b,int c,int d,char *e)
		{
			length=a;
			width=b;
			rooms=c;
			bathrooms=d;
			strcpy(furnished, e);	
		}
		void display()
		{
			cout<<"The length of house in feet is "<<length<<endl;
			cout<<"The width of house in feet is "<<width<<endl;
			cout<<"The No. of rooms in house is "<<rooms<<endl;
			cout<<"The No. of bathrooms in house is "<<bathrooms<<endl;
			cout<<"Furnished House "<<furnished<<endl;
			cout<<endl;
			cout<<"=========================================="<<endl;
		}
};
int main()
{
	house *a;
	a=new house;
	a->len(600);
	a->wid(600);
	a->room(5);
	a->bathroom(6);
	a->furnish("No");
	a->display();
}
