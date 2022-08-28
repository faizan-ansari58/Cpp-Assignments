// Questiom No : 16

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int yc=3,xc=3,r=7;
	int y;
	for(int x=10;x<=15;x++)
	{
		
	y=yc+-sqrt(r*r-(xc-x)*(xc-x));
	cout<<"value of y is "<<y<<endl;
	}
}
