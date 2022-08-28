#include<iostream>
#include<cstring>
using namespace std;
class car
{
	char brand[20];
	int model;
	int traveledmiles;
	char color[20];
		public:
		car(){
			strcpy(brand,"Honda");
			model=2018;
			traveledmiles=25000;
			strcpy(color,"white");
			}
	void display()
	{
		cout<<"Brand is "<<brand<<endl;
		cout<<"Model is "<<model<<endl;
		cout<<"Total miles traveled is "<<traveledmiles<<endl;
		cout<<"Color is "<<color<<endl;
	}
};
int main()
{
	car obj;
	obj.display();
}

