/*Display the following pattern using the nested loops:
1
2     4
3     6      9
4     8      12   16
5     10     15   20   25*/
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		cout<<i*j<<"	";
		cout<<"\n";
	}
	return 0;
}
