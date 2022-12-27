#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int mass;
	double density;
	double volume;
	
	cout<<"Enter the mass (g): ";
	cin>>mass;
	cout<<"Enter the density (g/cm3): ";
	cin>>density;
	
	volume=mass/density;
	
	cout<<endl;
	cout<<setprecision(2)<<"The volume is "<<volume<<" cubic metre"<<endl;
	
	return 0;
	
}
