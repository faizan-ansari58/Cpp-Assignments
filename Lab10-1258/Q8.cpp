#include<iostream>
using namespace std;
int main()
{
	int arr[4][6]={
	{1005,75,85,80,75,(arr[0][1]+arr[0][2]+arr[0][3]+arr[0][4]/4)},
	{1006,85,65,78,86,(arr[1][1]+arr[1][2]+arr[1][3]+arr[1][4]/4)},
	{1007,65,70,69,58,(arr[2][1]+arr[2][2]+arr[2][3]+arr[2][4]/4)},
	{1008,60,75,79,79,(arr[3][1]+arr[3][2]+arr[3][3]+arr[3][4]/4)}	
	};
	cout<<"Student#\tProgramming\tCalculus\tLinear Algebra\tIslamic Studies\tAverage"<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<6;j++)
		{
		cout<<arr[i][j]<<"\t\t";
		}
		cout<<endl;
	}
	
}
