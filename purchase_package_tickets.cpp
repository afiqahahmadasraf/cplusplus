#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	char package;
	char response;
	int adult;
	int child;
	int senior;
	int total_adult=0;
	int total_child=0;
	int total_senior=0;
	double charges;
	
	do
	{
		cout<<"Please choose a package name"<<endl;
		cout<<"Water Park [W], Amusement Park [A], Petting Zoo [P]: ";
		cin>>package;
		
		switch (toupper (package)) //toupper auto capitalizes input
		{
			case 'W':
				cout<<"You have selected the Water Park package"<<endl;
				cout<<"Enter the number of adults: ";
				cin>>adult;
				total_adult +=adult;
				charges +=(adult*47.90);
				
				cout<<"Enter the number of children: ";
				cin>>child;
				total_child +=child;
				charges +=(child*41.50);
				
				cout<<"Enter the number of senior citizens: ";
				cin>>senior;
				total_senior +=senior;
				charges +=(senior*35.40);
				
				break;
				
			case 'A':
				cout<<"You have selected the Amusement Park package"<<endl;
				cout<<"Enter the number of adults: ";
				cin>>adult;
				total_adult +=adult;
				charges +=(adult*25.90);
				
				cout<<"Enter the number of children: ";
				cin>>child;
				total_child +=child;
				charges +=(child*20.50);
				
				cout<<"Enter the number of senior citizens: ";
				cin>>senior;
				total_senior +=senior;
				charges +=(senior*15.40);
				
				break;
				
			case 'P':
				cout<<"You have selected the Petting Zoo package"<<endl;
				cout<<"Enter the number of adults: ";
				cin>>adult;
				total_adult +=adult;
				charges +=(adult*15.90);
				
				cout<<"Enter the number of children: ";
				cin>>child;
				total_child +=child;
				charges +=(child*12.50);
				
				cout<<"Enter the number of senior citizens: ";
				cin>>senior;
				total_senior +=senior;
				charges +=(senior*10.40);
				
				break;
				
			default:
				cout<<"Invalid package code"<<endl;
		}// end of switch statement
		
		cout<<"Do you want to add another package? (Y/N): ";
		cin>>response;
	}// end of do loop
	
	while (response=='Y'||response=='y');
	cout<<endl;
	cout<<endl;
	cout<<"The total number of adults are: "<<total_adult<<endl;
	cout<<"The total number of children are: "<<total_child<<endl;
	cout<<"The total number of senior citizens are: "<<total_senior<<endl;
	cout<<"The total price of tickets sold is RM"<<charges<<endl;
	
	return 0;
	
}
