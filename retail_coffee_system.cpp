//1.Header
#include <iostream>
#include <iomanip>
using namespace std;

//variable declaration
const double priceSmall=1.75;
const double priceMedium=1.90;
const double priceLarge=2.00;
const int smallCupSize=9;
const int mediumCupSize=12;
const int largeCupSize=15;

//function prototype
void mainMenu ();
void totalCups (int s,int m,int l);
void currentProfit (double cP);
void currentSales (int cS);

//parameter
void sellCoffee (int& stotalCups, int& mtotalCups, int& ltotalCups, double& current_Profit, int& current_Sales);

//2. Main Method
int main ()
{
	//3. Variable Declaration
	//number of cups 
	int num1=0; //s
	int num2=0; //m
	int num3=0; //l
	int totalCoffeeSold=0;
	double totalProfit=0.00;
	int choice;
	
	//display menu driven
	mainMenu();
	cout<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	
	while (choice!=6)
	{
		switch (choice)
		{
			case 1:
			cout<<endl;
			sellCoffee(num1, num2, num3, totalProfit, totalCoffeeSold);
			cout<<endl;
			break;
			
			case 2:
			cout<<endl;
			currentProfit(totalProfit);
			cout<<endl;
			break;
			
			case 3:
			cout<<endl; 
			currentSales(totalCoffeeSold);
			cout<<endl;
			break;
			
			case 4:
		    cout<<endl;
			totalCups(num1,num2,num3);
			cout<<endl;
			break;
			
			case 5:
			cout<<endl;
			totalCups(num1,num2,num3);
			currentSales(totalCoffeeSold);
			currentProfit(totalProfit);
			cout<<endl;
			break;
			
			default:
			cout<<"Invalid menu choice"<<endl;
		}//end of switch statement
		
		mainMenu();
		cout<<endl;
	    cout<<"Enter your choice: ";
	    cin>>choice;
	    cout<<endl;
	    
	}//end of while loop
	
	return 0;
}

void mainMenu ()
{
	cout<<"\t\t\tWelcome to Rosebarista_coffee"<<endl;
	cout<<"1. Enter 1 to order coffee"<<endl;
	cout<<"2. Enter 2 to check the total money made up to now."<<endl;
	cout<<"3. Enter 3 to check the total amount of coffee sold up to now"<<endl;
	cout<<"4. Enter 4 to check the number of coffee that is sold for each size"<<endl;
	cout<<"5. Enter 5 to print receipt"<<endl;
	cout<<"6. Enter 6 to exit the program"<<endl;
}

void coffeeMenu ()
{
	cout<<endl;
	cout<<"The codes represent the sizes for our coffee. Please choose your preferable size."<<endl;
	cout<<endl;
	cout<<"+----------------------------------------------------+"<<endl;
	cout<<"|                Rosebarista_coffee                  |"<<endl;
	cout<<"+----------------------------------------------------+"<<endl;
	cout<<"|  Code  |         Size         |       Price        |"<<endl;
	cout<<"+--------+----------------------+--------------------+"<<endl;
	cout<<"|   1    |     Small (9oz)      |       RM1.75       |"<<endl;
	cout<<"+--------+----------------------+--------------------+"<<endl;
	cout<<"|   2    |     Medium (12oz)    |       RM1.90       |"<<endl;
	cout<<"+--------+----------------------+--------------------+"<<endl;
	cout<<"|   3    |     Large (15oz)     |       RM2.00       |"<<endl;
	cout<<"+----------------------------------------------------+"<<endl;
	cout<<"|   4    |             Exit the Menu                 |"<<endl;
	cout<<"+----------------------------------------------------+"<<endl;
}

void currentProfit (double cP)
{
	cout<<"Total money made is $"<<cP<<endl;
}

void currentSales (int cS)
{
	cout<<"Total amount of coffee sold is "<<cS<<"oz"<<endl;
}

void totalCups (int s,int m,int l)
{
	cout<<"The number of small sized cups sold: "<<s<<endl;
	cout<<"The number of medium sized cups sold: "<<m<<endl;
	cout<<"The number of large sized cup sold: "<<l<<endl;
}

void sellCoffee (int& stotalCups, int& mtotalCups, int& ltotalCups, double& current_Profit, int& current_Sales)
{
	//variable declaration
	int cupSize;
	int numOfCups;
	double bill=0;
	
	coffeeMenu ();
	cout<<"Enter the code for the size that you would like to order: ";
	cin>>cupSize;
	cout<<endl;
	
	while (cupSize!= 4)
	{
		switch (cupSize)
		{
			case 1:
			cout<<"You have selected small size"<<endl;
			cout<<endl;
			cout<<"Enter the number of cups you will like to purchase: ";
			cin>>numOfCups;
			
			stotalCups +=numOfCups;
			bill=bill+ numOfCups*priceSmall;
			current_Sales +=numOfCups*smallCupSize;
			break;
			
			case 2:
			cout<<"You have selected medium size"<<endl;
			cout<<endl;
			cout<<"Enter the number of cups you will like to purchase: ";
			cin>>numOfCups;
			
			mtotalCups +=numOfCups;
			bill=bill+ numOfCups*priceMedium;
			current_Sales +=numOfCups*mediumCupSize;
			break;
			
			case 3:
			cout<<"You have selected large size"<<endl;
			cout<<endl;
			cout<<"Enter the number of cups you will like to purchase: ";
			cin>>numOfCups;
			
			ltotalCups +=numOfCups;
			bill=bill+ numOfCups*priceSmall;
			current_Sales +=numOfCups*largeCupSize;
			break;
			
			default:
			cout<<"Enter a valid code"<<endl;	
		}//end of switch statement
		
		coffeeMenu ();
		cout<<"Enter the code for the size that you would like to order: ";
	    cin>>cupSize;
	    cout<<endl;	
	}//end of while loop
		
	bill= bill+current_Sales;
	cout<<endl;
	cout<<"Your grand total is $"<<bill<<endl;
	cout<<endl;
	current_Profit=current_Profit+bill;
}























