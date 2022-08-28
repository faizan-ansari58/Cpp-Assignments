// Questiom No : 17
//x=xc+rcos T,  y=yc+rsin T , calculate x and y for theta (90-120)
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int theta=90,Theta=120,xc=3,yc=3;
	float x,y,x1,y1;
	x=xc+sin(theta);
	y=yc+sin(theta);
	x1=xc+sin(Theta);
	y1=yc+sin(Theta);
	cout<<"Value of x for theta=90 is "<<x<<endl<<"Value of y for theta=90 is "<<y<<endl;
	cout<<"Value of x for theta=120 is "<<x1<<endl<<"Value of y for theta=120 is "<<y1<<endl;
}
