//Input five number between 1-20 usinga loop and print # by passing these number to a function
#include<iostream>
using namespace std;
int print(int i)
{
	int n;
	for(n;n<i;n++){
		cout<<"#";
	}
	cout<<endl;
return i;
}
int main()
{
	int num;
	for(int c;c<6;c++){
		while(true){
				cout<<"Enter the num 1-20 =";
				cin>>num;
				if(num>=1&&num<=20)
				{
					break;
				}
				else{
					cout<<"Wrong num"<<endl;
				}
			}
			print(num);
		}	
	return 0;
}

