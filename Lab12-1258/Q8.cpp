#include<iostream>
#include<cstring>
using namespace std;
class car
{
	private:
		int modelyear;
		float kilometer;
		char company[30],modelname[30];
	public:
		void input()
		{
			cout<<"Enter Company Name ";
			cin>>company;
			cout<<"Enter Mode Name: ";
			cin>>modelname;
			cout<<"Enter Model Year: ";
			cin>>modelyear;
			cout<<"Enter Kilometer driven: ";
			cin>>kilometer;
		}
	void output()
	{
		cout<<"Company Name: "<<company<<endl;
		cout<<"Model Name: "<<modelname<<endl;
		cout<<"Model Year: "<<modelyear<<endl;
		cout<<"Kilometer Driven: "<<kilometer<<endl;
	}
};
int main()
{
	car c;
	c.input();
	cout<<endl;
	c.output();
}
