#include <iostream>
using namespace std;
int main ()
{
	double cents;
	double halfDollars;
	double quarters;
	double dimes;
	double nickels;
	double pennies;
	
	cout<<"Enter change in cents: ";
	cin>>cents;
	
	halfDollars=cents/2;
	quarters=cents/25;
	dimes=cents/10;
	nickels=cents/5;
	pennies=cents/1;
	
	cout<<"Equivalent change in: "<<endl;
	cout<<endl;
	cout<<"Half Pennies are "<<halfDollars<<endl;
	cout<<"Quarters are "<<quarters<<endl;
	cout<<"Dimes are "<<dimes<<endl;
	cout<<"Nickels are "<<nickels<<endl;
	cout<<"Pennies are "<<pennies<<endl;
	
	return 0;
}
