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
	house h;
	house h1(250,260,7,6,"Yes");
	h.display();
	h1.display();
}
