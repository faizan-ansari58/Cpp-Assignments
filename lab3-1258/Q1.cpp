/*Following is the code which will print next character which comes after the64in the ASCII table
int x=64;x++; 
Same as x=x+1;cout<<"x="<<static_cast<char>(x);*/
#include<iostream>
using namespace std;
int main()
{
	int x;
	
	cout<<"Input any character in integer form ";
	cin>>x;
	
	x++;
	cout<<"x="<<static_cast<char>(x)<<endl;
	
	x++;
	cout<<"x="<<static_cast<char>(x)<<endl;
	
	x++;
	cout<<"x="<<static_cast<char>(x)<<endl;
	
	x++;
	cout<<"x="<<static_cast<char>(x)<<endl;
	
	x++;
	cout<<"x="<<static_cast<char>(x);
	
	return 0;
}
