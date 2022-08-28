//Question no 11
#include <iostream>
#include <cstdio>
using namespace std;
void menu();
void input(int[]);
void output(int[]);
void large(int[]);
void small(int[]);
void sortA(int[]);
void sortD(int[]);
void search(int[]);
const int size=10;
bool flag=0;
int main(){
	int opt, num[size];
	while(true){
		menu();
		cout<<"Choose Option: ";
		cin>>opt;
	switch(opt){
		case 1: input(num); break;
		case 2: output(num); break;
		case 3: large(num); break;
		case 4: small(num); break;
		case 5: sortA(num); break;
		case 6: sortD(num); break;
		case 7: search(num); break;
		default: cout<<" ";
}
	if(opt==8){
	cout<<"Exited.\n";
	break;
}
	system("Pause");
	system("cls");
}
}
	void menu(){
		cout<<"\t\t\tMenu\n";
		cout<<"\t-------------------------------\n\n";
		cout<<"\t1\tInput Array\n\n";
		cout<<"\t2\tOutput Array\n\n";
		cout<<"\t3\tLargest Element\n\n";
		cout<<"\t4\tSmallest Element\n\n";
		cout<<"\t5\tSort in Ascending Order\n\n";
		cout<<"\t6\tSort in Descending Order\n\n";
		cout<<"\t7\tSearch in Array\n\n";
		cout<<"\t8\tExit\n";
}
	void input(int num[]){
		bool flag=1;
	cout<<"Enter 10 Numbers: ";
	for(int i=0;i<size;i++)
	{
		cin>>num[i];
}
}
	void output(int num[]){
		bool flag =1;
	for(int i=0; i<size; i++){
	cout<<num[i]<<' ';
}
	cout<<endl;
}
	void large(int num[]){
		int max;
		max=num[0];
		for(int i=1; i<size; i++){
			if(max<num[i]){
				max=num[i];
		}
	}
	cout<<"Maximum: "<<max<<endl;
}
	void small(int num[]){
		int min;
		min=num[0];
		for(int i=1; i<size; i++){
			if(min>num[i]){
				min=num[i];
	}
}
	cout<<"Minimum: "<<min<<endl;
}
	void sortA(int num[]){
		int swape;
		for(int j=0; j<size-1;j++){
			for(int i=0; i<size-1;i++){
				if(num[i]>num[i+1]){
					swape=num[i];
					num[i]=num[i+1];
					num[i+1]=swape;
		}
	}
}
	cout<<"\nAscending: ";
	for(int i=0;i<10;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
}
	void sortD(int num[]){
		int swape;
		for(int j=0; j<size-1;j++){
			for(int i=0; i<=size-1;i++){
				if(num[i]<num[i+1]){
					swape=num[i];
					num[i]=num[i+1];
						num[i+1]=swape;
			}
		}
}
	cout<<"\nDescending: ";
	for(int i=0;i<10;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
}
	void search(int num[]){
		int found = 0,c;
		cout<<"Enter Element to Find: ";
		cin>>c;
		for(int i=0;i<size;i++){
			if(c==num[i]){
			found=1;
		}
	}
	if(found==1){
		cout<<"Element found in Array.\n";
	}
	else{
		cout<<"Element Not Found in the Array.\n";
	}
}
