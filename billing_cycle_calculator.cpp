#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	double averageDailyBalance;
	double netBalance;
	double payment;
	double interest;
	double interestRate;
	double d1;
	double d2;
	
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"Enter net balance: ";
	cin>>netBalance;
	cout<<endl;
	cout<<"Enter payment made: ";
	cin>>payment;
	cout<<endl;
	cout<<"Enter number of days in the billing cycle: ";
	cin>>d1;
	cout<<endl;
	cout<<"Enter the number of days' payment is made before billing cycle: ";
	cin>>d2;
	cout<<endl;
	cout<<"Enter interest per month: ";
	cin>>interestRate;
	
	averageDailyBalance=(netBalance*d1-payment*d2)/d1;
	interest=averageDailyBalance*interestRate;
	
	cout<<endl;
	cout<<"The interest is "<<interest<<endl;
	
	return 0;
}
