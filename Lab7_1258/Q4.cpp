/* Questiom No : 4
 Write two functions which the name largest, which takes three arguments and print largest. One function receives all 
 integer argument and the other receives all float arguments. Call both function in main*/

#include<iostream>
using namespace std;
int largest(int a, int b, int c)
{
	int largest;
	if((a>b)&&(a>c)){
	largest=a;}
	if((b>a)&&(b>c)){
	largest=b;}
	if((c>a)&&(c>b)){
	largest=c;}
	return largest;
}
float largest(float x, float y, float z)
{
	float largest;
	if((x>y)&&(x>z)){
	largest=x;}
	if((y>x)&&(y>z)){
	largest=y;}
	if((z>x)&&(z>y)){
	largest=z;}
	return largest;
}
int main()
{
	int a, b, c;
	cout<<"Enter three integers : ";
	cin>>a>>b>>c;
	float x, y, z;
	cout<<"Enter three float numbers : ";
	cin>>x>>y>>z;
	cout<<"The largest number is "<<largest(a,b,c)<<endl;
	cout<<"The largest number is "<<largest(x,y,z)<<endl;
}
