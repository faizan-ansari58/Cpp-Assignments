/*Modification ofencryptfunctionfrom previous labin such a way that add 3 to every digit and modulate (%) with 10.
Then modify decrypt function accordingly.*/
#include<iostream>
using namespace std;
int enc(int n)
{
	int d1,d2,d3,d4;
	d4=(n%10);
	n=n/10;
	d3=(n%10);
	n=n/10;
	d2=(n%10);
	n=n/10;
	d1=(n%10);
	n=n/10;
	d1=(d1+3)%10;
	d2=(d2+3)%10;
	d3=(d3+3)%10;
	d4=(d4+3)%10;
	return((d1*1000)+(d2*100)+(d3*10)+d4);
}
int dec(int n){
		int d1,d2,d3,d4;
	d4=(n%10);
	n=n/10;
	d3=(n%10);
	n=n/10;
	d2=(n%10);
	n=n/10;
	d1=(n%10);
	n=n/10;
	d1=(d1-3)%10;
	d2=(d2-3)%10;
	d3=(d3-3)%10;
	d4=(d4-3)%10;
	return((d1*1000)+(d2*100)+(d3*10)+d4);
}
int main(){
	int num;
	char ans;
	cout<<"Enter num =";
	cin>>num;
	while(1){
		cout<<"Enter the (encrypt and decrypt) =";
		cin>>ans;
		if(ans=='e'||ans=='d')
		{
			break;
		}
		else{
		cout<<"Enter 'e' or 'd'"<<endl;
		}
	}
	if(ans=='e')
	{
		cout<<"Now number is = "<<enc(num)<<endl;
	}
	else
	{
		cout<<"Now number is = "<<dec(num)<<endl;
	}
	system("pause");
	return 0;
}

