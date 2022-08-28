//Question No 16
#include <iostream>
using namespace std;
int main()
{
	int arr[3][2]={{1,2},{6,7},{3,4}};
	cout<<"Before Swapping:"<<endl;
	cout<<"*********************************"<<endl;
	cout<<arr[0][0]<<"\t"<<arr[0][1]<<endl;
	cout<<arr[1][0]<<"\t"<<arr[1][1]<<endl;
	cout<<arr[2][0]<<"\t"<<arr[2][1]<<endl;
	
	cout<<"After Swapping:"<<endl;
	cout<<"*********************************"<<endl;
	int temp;
	temp=arr[0][1];
	arr[0][1]=arr[2][1];
	arr[2][1]=temp;
	
	cout<<arr[0][0]<<"\t"<<arr[0][1]<<endl;
	cout<<arr[1][0]<<"\t"<<arr[1][1]<<endl;
	cout<<arr[2][0]<<"\t"<<arr[2][1]<<endl;
	return 0;
}
