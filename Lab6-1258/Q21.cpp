//Write a function which take five arguments and input their value. Display the value in main.
#include<iostream>
using namespace std;
void value(int a1,int b2,int c3,int d4,int e5){
}
int main()
{
	int a=0,b=0,c=0,d=0,e=0;
	cout<<"Enter the five numbers =";
	cin>>a>>b>>c>>d>>e;
	value(a,b,c,d,e);
	int&ref1=a,&ref2=b,&ref3=c,&ref4=d,&ref5=e;
	cout<<ref1<<endl<<ref2<<endl<<ref3<<endl<<ref4<<endl<<ref5<<endl;
	return 0;
}

