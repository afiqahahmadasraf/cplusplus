#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	double bag;
	double price;
	double area;
	double fertilizerPounds;
	double fertilizerArea;
		
	cout<<"Enter the amount (pounds) of fertilizer in one bag: ";
	cin>>bag;
	cout<<endl;
	
	cout<<"Enter the price of "<<bag<<" pounds of fertilizer bag: "<<"$";
	cin>>price;
	cout<<endl;
	
	cout<<"Enter the area (square feet) that can be fertilized with one bag: ";
	cin>>area;
	
	fertilizerPounds=price/bag;
	fertilizerArea=price/area;
	
	cout<<fixed<<setprecision(2)<<"The cost of fertilizer per pound is $"<<fertilizerPounds<<endl;
	cout<<fixed<<setprecision(2)<<"The cost of fertilizer per square foot is $"<<fertilizerArea<<endl;
	return 0;
	
}
