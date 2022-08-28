/*A company wants to send a four digitnumber in encrypted form on a network. Write functions with nameencryptanddecrypt.
The function encrypts input a four digit number and then swaps the first and third; second and fourth digits. 
Thefunction decrypted input a four digit number and decrypt number in its original form. 
Force the user to only enter a fourdigit number.
Basic InformationRegistration#NameTotal MarksMarks ObtainedTools:Dev-C++ 5.4.1Objectives1.do-whileLoops2.Nested Loops3.Functions4.
NoteSolve the following problems using the concepts we havecoveredso far*/
#include<iostream>
using namespace std;
void encrypt();
void decrypt();
int main()
{
	encrypt();
	cout<<endl;
	decrypt();
	cout<<endl;
	return 0;
}
void encrypt()
{
	int first,second,third,forth,num;
	cout<<"Enter four digit number: ";
	cin>>num;
	do
	{
		cout<<"Encrypt the four digit: ";
		cin>>num;
		if(num>9999||num<1000)
		{
			cout<<"\nInvalid Digit\nEnter Four Digit Number"<<endl;
		}
		else
		{
			break;
		}
	}
	while(1);
	forth=num%10;
	num=num%10;
	third=num%10;
	num=num%10;
	second=num%10;
	num=num%10;
	first=num%10;
	num=num%10;
	cout<<"Encrypt the number "<<first<<second<<third<<forth<<endl;
}
void decrypt()
{
	int first,second,third,forth,num;
	cout<<"Enter four digit number: ";
	cin>>num;
	do
	{
		cout<<"Decrypt the four digit: ";
		cin>>num;
		if(num>9999||num<1000)
		{
			cout<<"\nInvalid Digit\nEnter Four Digit Number"<<endl;
		}
		else
		{
			break;
		}
	}
	while(1);
	forth=num%10;
	num=num%10;
	third=num%10;
	num=num%10;
	second=num%10;
	num=num%10;
	first=num%10;
	num=num%10;
	cout<<"Decrypt the number "<<first<<second<<third<<forth<<endl;
}

