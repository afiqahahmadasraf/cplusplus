#include <iostream>
using namespace std;
int main ()
{
	int feet;
	int inches;
	double cm;
	double f;
	double i;
	double x;
	
	cout<<"Please enter length in feet: ";
	cin>>feet;
	cout<<"Please enter length in inches: ";
	cin>>inches;
	
	f=feet*2.54*12;
	i=inches*2.54;
	x=f+i;
	
	cout<<feet<<" feet in centimeters are "<<f<<"cm"<<endl;
	cout<<inches<<" inches in centimeters are "<<i<<"cm"<<endl;
	cout<<"The total length in centimeters are: "<<x<<endl;
	
	return 0;
}
