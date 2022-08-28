//nput the marks of ten students and display their average. Usedo-while
#include <iostream>
using namespace std;
int main()
{
	int i,sum,marks;
	
	i=1;
	
	sum=0;
	
	do
	{
		cout<<"Input marks of student "<<i<<": ";
		cin>>marks;
		sum=sum+marks;
		i++;
	}while(i<=10);
	
	cout<<"Average is "<<sum/10<<endl;
	
	return 0;
}
