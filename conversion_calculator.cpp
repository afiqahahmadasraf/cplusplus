#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int x;
	int y;
	int m;	
	double raised;
	double ab;
	double sq;
	double l;
	double t;
	double z;
	
	cout<<"Enter the value of X: ";
	cin>>x;
	cout<<"Enter the value of Y: ";
	cin>>y;
	cout<<"Enter the value of M: ";
	cin>>m;
	
	raised=pow(x,y);
	ab=abs(y);
	sq=sqrt(m);
	l=log(x);
	t=tan(x);
	z=(sqrt(m))+pow(x,y);
	
	cout<<endl;
	cout<<"The value of X raised to the power of Y is "<<raised<<endl;
	cout<<"The absolute value is "<<ab<<endl;
	cout<<"The square root value of M is "<<sq<<endl;
	cout<<"The log value of X is "<<l<<endl;
	cout<<"The tan value of X is "<<t<<endl;
	cout<<"The value of Z is "<<z<<endl;
	
	return 0;
}
