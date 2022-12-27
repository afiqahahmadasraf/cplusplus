#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	double milk;
	double cost;
	double carton;
	double profit;
	
	cout<<"Enter total amount of milk produced (litres): ";
	cin>>milk;
	
	carton=milk/3.78;
	cost=milk*0.38;
	profit=(carton*0.27)-cost;
	
	cout<<setprecision(1)<<"The number of milk cartons needed to hold milk: "<<carton<<endl;
	cout<<setprecision(2)<<"The cost of producing milk: RM"<<cost<<endl;
	cout<<setprecision(2)<<"The profit for producing milk: RM"<<profit<<endl;
	
	return 0;
}
