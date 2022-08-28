#include <iostream>
# include<cstring>
using namespace std;

char palindrome(char a[],char b[] )
{
	int found1=0,found2=0;
	int length1=strlen(a);
	int length2=strlen(b);
	
	
	
	for(int i=0;i<length1;i++){
		if(a[i]!=a[length1-i-1]){
			found1=1;
		}
	}
	
	
	
	for(int j=0;j<length2;j++){
		if(b[j]!=b[length2-j-1]){
			found2=1;
		}
	}
	
	
	if(found1==1){
		cout<<a<<" is not palimdrome"<<endl;
	}
	else{
		cout<<a<<" is palindrome "<<endl;
	}
	
	
	
	if(found2==1){
		cout<<b<<" is not palimdrome"<<endl;
	}
	else{
		cout<<b<<" is palindrome "<<endl;
	}
	
	
}
int main()
{
	char string1[200],string2[200];
	cout<<"Enter String1 : ";
	cin>>string1;
	cout<<"Enter String2 : ";
	cin>>string2;
	palindrome(string1,string2);
	return 0;
}
