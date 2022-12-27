#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
	string movieName;
	double adultTicket;
	double childTicket;
	int adultSold;
	int childSold;
	double donation;
	double gross;
	double donated;
	double netSale;
	
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"Enter the movie name: ";
	getline (cin,movieName);
	cout<<endl;
	cout<<"Enter the price of an adult ticket: $";
	cin>>adultTicket;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adultSold;
	cout<<endl;
	cout<<"Enter the price of a child ticket: $";
	cin>>childTicket;
	cout<<"Enter the number of child tickets sold: ";
	cin>>childSold;
	cout<<endl;
	cout<<"Enter the percentage donated: ";
	cin>>donation;
	cout<<endl;
	cout<<endl;
	
	gross=(adultTicket*adultSold)+(childTicket*childSold);
	donated=gross*donation/100;
	netSale=gross-donated;
	
	cout<< "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<"_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
    cout<<setfill('.')<<left<<setw(35)<< "Movie Name: "<<right << " " <<movieName<<endl;
    cout<<left<<setw(35)<<"Number of Tickets Sold: "<<setfill(' ') <<right<<setw(10)<<adultSold+childSold<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Gross Amount: "<<setfill(' ') << right <<" $"<< setw(8)<<gross<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Percentage of Gross Amount Donated: "<<setfill(' ')<<right<<setw(9)<<donation<<'%'<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Amount Donated: "<<setfill(' ')<<right<<" $"<<setw(8)<<donated<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Net Sale: "<<setfill(' ') <<right <<" $"<< setw(8)<<netSale<<endl;
    
    return 0;
}
