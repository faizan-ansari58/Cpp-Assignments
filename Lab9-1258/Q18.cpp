#include<iostream>
using namespace std;
int main()
{
	int matrix[3][5];
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<5;col++)
		{
			cout<<"Ener values for matrix"<<endl;
			cout<<row<<","<<col<<",\t";
			cin>>matrix[row][col];
		}
	}
	cout<<endl;
	cout<<"The values entered for matrix are displayed as"<<endl;
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<5;col++)
		{
			cout<<"\t"<<matrix[row][col]+10;
		}
		cout<<endl;
	}
}
