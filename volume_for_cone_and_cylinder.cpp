#include <iostream>
#include <iomanip>
using namespace std;

//function
double getValue (double& r, double& h);
double calVolume (double r,double h);
double coneV (double r, double h);
double cylinderV (double r, double h);
const double pi=3.142;

int main ()
{
	double r;
	double h;
	
	getValue (r,h);
	calVolume (r,h);
}

double getValue (double& r, double& h)
{
	cout<<"Enter the radius: ";
	cin>>r;
	cout<<"Enter the height: ";
	cin>>h;
}

double calVolume (double r, double h)
{
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"The volume of cone is: "<<coneV (r,h)<<" cubic centimetres"<<endl;
	cout<<"The volume of cylinder is: "<<cylinderV (r,h)<<" cubic centimeters"<<endl;
}

double coneV (double r, double h)
{
	return (pi*r*r*h/3);
}

double cylinderV (double r, double h)
{
	return (pi*r*r*h);
}

