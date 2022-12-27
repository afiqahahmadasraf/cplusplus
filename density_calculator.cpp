#include <iostream>
using namespace std;

//function
double findDensity (double, double);

int main ()
{
	double mass;
	double volume;
	double density;
	
	cout<<"Enter the mass of the block: ";
	cin>>mass;
	cout<<"Enter the volume of the block: ";
	cin>>volume;
	
	//call function
	density=mass/volume;
	cout<<"The density of the block is "<<density<<endl;
	
	return 0;
}

double findDensity (double m, double v)
{
	double density;
	density=m/v;
	
	return density;
}
