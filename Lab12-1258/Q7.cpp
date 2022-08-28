#include<iostream>
#include<cstring>
using namespace std;
class book
{
	private:
		int Isbn,price,pageno;
		char title[50],mainarea[50],subarea[50];
	public:
		void input()
		{
			cout<<"Enter ISBN: ";
			cin>>Isbn;
			cout<<"Enter Title: ";
			cin>>title;
			cout<<"Enter Page No: ";
			cin>>pageno;
			cout<<"Enter Main area: ";
			cin>>mainarea;
			cout<<"Enter subarea: ";
			cin>>subarea;
			cout<<"Enter Price: ";
			cin>>price;
		}
		void output()
		{
			cout<<"ISBN is: "<<Isbn<<endl;
			cout<<"Title is: "<<title<<endl;
			cout<<"Page no is: "<<pageno<<endl;
			cout<<"Main Area is: "<<mainarea<<endl;
			cout<<"Sub Area is: "<<subarea<<endl;
			cout<<"Price is: "<<price<<endl;
			
		}
};
int main()
{
	book a[5];
	for(int i=0;i<=4;i++)
	{
		a[i].input();
		a[i].output();
	}
	cout<<endl;
}
