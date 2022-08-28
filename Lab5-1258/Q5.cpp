//Display largest integer and smallest among the several integersentered by the user. Uses Y OR y as sentinel value
#include <iostream>
using namespace std;
int main()
{
	int i,small,large,y;
	large=0;
	small=999999;
	while(i<=10)
	{
		cout<<"Enter the number ";
		cin>>y;
		if(y>large)
		{
			large=y;
		}
		if(y<small)
		{
			small=y;
		}
	i++;
	}
	cout<<"Large number is "<<large<<endl;
	cout<<"Small number is "<<small<<endl;
}
