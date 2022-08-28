/*Write  a  function,  which  takes  two  arguments,first  charandsecond  int; 
 prints  a  rectangle  of  char  of  size  int.  Call  thisfunction in main two times with variable and constants*/
#include<iostream>
using namespace std;
int print(char l,int s)
{
 	int c1,c2,letter,size;
 	for(c1=1;c1<=6;c1++){
 		for(int c2=1;c2<=s;c2++){
 			if ((c1==1||c1==6)||(c2==1||c2==s))
 				cout<<l;
 			else
 				cout<<" ";
		}
	cout<<endl;
 	}
return letter;
return size;
}
int main()
{
int size;
	char letter;
	cout<<"Enter the character =";
	cin>>letter;
	cout<<"Enter the size =";
	cin>>size;
	print(letter,size);
		print('L',15);
	return 0;
}

