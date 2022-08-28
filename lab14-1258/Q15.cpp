#include<iostream>
#include<fstream>
#include<conio.h>
#include<iomanip>
#include<cstring>
using namespace std;
class Telephone{
	struct data{
		char First_Name[30];
		char Last_Name[30];
		long long Phone_Number;
		char Email[30];
		char City[30];
	};
	public:
	void input();
	void display();
	void search_with_First_Name();
	void search_with_City();
	void Update_First_Name();
	void Update_Phone_Number();
	int Menu();
};
int Telephone::Menu(){
	int menu;
	system("cls");
	cout<<"\t\t\t Telephone Directory\n\n";
	cout<<"\t1--------------------->Input\n";
	cout<<"\t2--------------------->Display All\n";
	cout<<"\t3--------------------->Search with First Name\n";
	cout<<"\t4--------------------->Search with City\n";
	cout<<"\t5--------------------->Update First Name\n";
	cout<<"\t6--------------------->Update Phone Number\n";
	cout<<"\t7--------------------->Exit\n\n\n";
	cout<<"Enter Choice : ";
	cin>>menu;
	cout<<endl<<endl;
	return menu;
}
void Telephone::input(){
	data s;
	fstream fh("Record.txt", ios::app | ios::binary);
	system("cls");
	if(!fh){
		cout<<"File could not be opened."<<endl;
	}
	cout<<"Enter the First Name   : ";
	cin>>s.First_Name;
	cout<<"Enter the Last Name    : ";
	cin>>s.Last_Name;
	cout<<"Enter the Phone Number : ";
	cin>>s.Phone_Number;
	cout<<"Enter the Email        : ";
	cin>>s.Email;
	cout<<"Enter City of memeber  : ";
	cin>>s.City;
	fh.write((char *)&s, sizeof(s));
	fh.close();
}
void Telephone::display(){
	data s;
	ifstream fileh("Record.txt", ios::binary);
	system("cls");
	if(!fileh){
		cout<<"File could not be opened."<<endl;
	}
	cout<<left<<setw(20)<<"First Name"<<setw(20)<<"Last Name"<<setw(25)<<"Phone Number"<<setw(30)<<"Email"<<setw(20)<<"City"<<endl<<endl;
	while(fileh.read((char *)&s, sizeof(s))){
	cout<<left<<setw(20)<<s.First_Name<<setw(20)<<s.Last_Name<<setw(25)<<s.Phone_Number<<setw(30)<<s.Email<<setw(20)<<s.City<<endl;
	}
	cout<<endl<<endl;
}
void Telephone::search_with_First_Name(){
	char name[30];
	cout<<endl<<endl;
	cout<<"Enter the name you want the record : ";
	cin>>name;
	data s;
	ifstream fileh("Record.txt", ios::binary);
	system("cls");
	int a = 0;
	if(!fileh){
		cout<<"File could not be opened."<<endl;
	}
	cout<<left<<setw(20)<<"First Name"<<setw(20)<<"Last Name"<<setw(25)<<"Phone Number"<<setw(30)<<"Email"<<setw(20)<<"City"<<endl<<endl;
	while(fileh.read((char *)&s, sizeof(s))){
		if(strcmp(name, s.First_Name)==0){
			a++;
			cout<<left<<setw(20)<<s.First_Name<<setw(20)<<s.Last_Name<<setw(25)<<s.Phone_Number<<setw(30)<<s.Email<<setw(20)<<s.City<<endl;
		}
	}
	cout<<endl<<endl;
	if(a==0){
		cout<<"Record of "<<name<<" does not exists"<<endl;
	}
	cout<<endl<<endl;
}
void Telephone::search_with_City(){
	char city[30];
	cout<<endl<<endl;
	cout<<"Enter the city you want the record : ";
	cin>>city;
	data s;
	ifstream fl("Record.txt", ios::binary);
	system("cls");
	int a = 0;
	if(!fl){
		cout<<"File could not be opened."<<endl;
	}
	cout<<left<<setw(20)<<"First Name"<<setw(20)<<"Last Name"<<setw(25)<<"Phone Number"<<setw(30)<<"Email"<<setw(20)<<"City"<<endl<<endl;
	while(fl.read((char *)&s, sizeof(s))){
		if(strcmp(city, s.City)==0){
		a++;
		cout<<left<<setw(20)<<s.First_Name<<setw(20)<<s.Last_Name<<setw(25)<<s.Phone_Number<<setw(30)<<s.Email<<setw(20)<<s.City<<endl;
		}
	}
	cout<<endl<<endl;
	if(a==0){
		cout<<"Record of "<<city<<" does not exists"<<endl;
	}
	fl.close();
	cout<<endl<<endl;
}
void Telephone::Update_First_Name(){
	int g=0;
	char name[30];
	char fname[30];
	data s;
	cout<<endl<<endl;
	cout<<"Enter the First Name you want to update : ";
	cin>>name;
	cout<<"\nEnter the First Name "<<name<<" you want to update with : ";
	cin>>fname;
	ifstream f("Record.txt", ios::binary);
	if(!f){
		cout<<"File could not be opened."<<endl;
	}
	while(f.read((char *)&s, sizeof(s))){
		g++;
	}
	f.close();
	data q[g];
	ifstream h1("Record.txt", ios::binary);
	if(!h1){
		cout<<"File could not be opened."<<endl;
	}
	while(!h1.eof()){
		for(int i=0; i<g; i++){
			h1.read((char *)&q[i], sizeof(q[i]));
		}
	}
	for(int i=0; i<g; i++){
		if(strcmp(name, q[i].First_Name)==0){
			strcpy(q[i].First_Name, fname);
		}
	}
	h1.close();
	if( remove( "Record.txt" ) != 0 )
    	perror( "Error deleting file" );
  	else
    	puts( "File successfully deleted" );
	fstream h2("Record.txt", ios::app | ios::binary);
	if(!h2){
		cout<<"File could not be opened."<<endl;
	}
	for(int i=0; i<g; i++){
		h2.write((char *)&q[i], sizeof(q[i]));
	}
	cout<<endl<<endl;
}
void Telephone::Update_Phone_Number(){
	int g=0;
	long long pn;
	long long pn1;
	data s;
	cout<<endl<<endl;
	cout<<"Enter the Phone Number you want to update : ";
	cin>>pn;
	cout<<"\nEnter the Phone Number "<<pn<<" you want to update with : ";
	cin>>pn1;
	ifstream f("Record.txt", ios::binary);
	if(!f){
		cout<<"File could not be opened."<<endl;
	}
	while(f.read((char *)&s, sizeof(s))){
		g++;
	}
	f.close();
	data q[g];
	ifstream h1("Record.txt", ios::binary);
	if(!h1){
		cout<<"File could not be opened."<<endl;
	}
	while(!h1.eof()){
		for(int i=0; i<g; i++){
			h1.read((char *)&q[i], sizeof(q[i]));
		}
	}
	for(int i=0; i<g; i++){
		if(pn == q[i].Phone_Number){
			q[i].Phone_Number = pn1;
		}
	}
	h1.close();
	if( remove( "Record.txt" ) != 0 )
    	perror( "Error deleting file" );
  	else
    	puts( "Operation Successfull" );
	fstream h2("Record.txt", ios::app | ios::binary);
	if(!h2){
		cout<<"File could not be opened."<<endl;
	}
	for(int i=0; i<g; i++){
		h2.write((char *)&q[i], sizeof(q[i]));
	}
	cout<<endl<<endl;
}
int main(){
	Telephone r;
	int menu;
	do{
		menu = r.Menu();
		if(menu==1){
			r.input();
			cout<<"Press any key to continue : ";
			getch();
		}
		else if(menu==2){
			r.display();
			cout<<"Press any key to continue : ";
			getch();
		}
		else if(menu==3){
			r.search_with_First_Name();
			cout<<"Press any key to continue : ";
			getch();
		}
		else if(menu==4){
			r.search_with_City();
			cout<<"Press any key to continue : ";
			getch();
		}
		else if(menu==5){
			r.Update_First_Name();
			cout<<"Press any key to continue : ";
			getch();
		}
		else if(menu==6){
			r.Update_Phone_Number();
			cout<<"Press any key to continue : ";
			getch();
		}
	}while(menu!=7);
	return 0;
}
