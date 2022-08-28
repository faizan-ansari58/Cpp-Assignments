// Questiom No : 15
// Implement math function in switch and calculate appropriate function.

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int choicenumber;
	cout<<endl;
	cout<<"---menu---- "<<endl;
	cout<<"1"<<"\t"<<"power"<<endl;
	cout<<"2"<<"\t"<<"sin"<<endl;
	cout<<"3"<<"\t"<<"square root"<<endl;
	cout<<"4"<<"\t"<<"tan"<<endl;
	cout<<"Enter the choice number :";
	cin>>choicenumber;
	switch(choicenumber){
		int num1,num2;
		case 1:	
			cout<<endl;
			cout<<"Enter the base num :";
			cin>>num1;
			cout<<"Enter the power :";
			cin>>num2;
			cout<<num1<<"^"<<num2<<" = "<<pow(num1,num2);
			break;
		case 2:
			cout<<endl;
			cout<<"Enter the value :";
			cin>>num1;
			cout<<"Sin "<<num1<<" = "<<sin(num1);
			break;
		case 3:
			cout<<endl;
			cout<<"Enter number :";
			cin>>num1;
			cout<<"Square root "<<num1<<" = "<<sqrt(num1);
			break;
		case 4:
			cout<<endl;
			cout<<"Enter number :";
			cin>>num1;
			cout<<"Tan "<<num1<<" = "<<tan(num1);
			break;
		default:
			cout<<"Invalid value :";
	}
	return 0;
}

