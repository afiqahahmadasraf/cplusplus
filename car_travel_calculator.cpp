#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
	double distance=0;
    double carA=0;
	double carB=0;
	double elapsedTime;
	int time1=0;
	int minutes;
	int hours;
	
	cout<<"Enter the average speed (mph) of car A: ";
	cin>>carA;
	cout<<"Enter the average speed (mph) of car B: ";
	cin>>carB;
	cout<<"Enter the time the cars traveled (in hours): ";
	cin>>time1;
	cout<<"Enter the time the cars traveled (in minutes): ";
	cin>>minutes;
	
	hours=time1*60;
	elapsedTime=hours+minutes;   //elapsed time=hours+minutes
	distance=sqrt(pow(carA*elapsedTime,2)+pow(carB*elapsedTime,2)); //distance=sq root (speedA*time)+(speedB*time) power2
	
	cout<<fixed<<setprecision(3)<<"The shortest distance traveled between car A and car B is: "<<distance<<endl;
	
	return 0;
}
