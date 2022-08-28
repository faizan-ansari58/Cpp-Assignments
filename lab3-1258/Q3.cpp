/*Ask theuser to enter the distance in Kilometers and convert it into meters, feet, yards and miles.
Print appropriately One Kilometer = 0.621371192 Miles, 1000 Meters, 1093.6133 yards, 3280.8399 feet*/
#include<iostream>
using namespace std;
int main()
{
	float kilometer,meters,feet,yards,miles;
	cout<<"Enter distance in kilometer ";
	cin>>kilometer;
	
	meters=kilometer*1000;
	cout<<"Distance in meters is "<<meters<<endl;
	
	feet=kilometer*3280.8399;
	cout<<"Distance in feet is "<<feet<<endl;
	
	yards=kilometer*1093.6133;
	cout<<"Distance in yards is "<<yards<<endl;
	
	miles=kilometer*0.621371192;
	cout<<"Distance in miles is "<<miles<<endl;
	
	return 0;
}
