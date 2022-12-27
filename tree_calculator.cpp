#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
	double length;
	double radius;
	double space;
	double numberOfTrees;
	double totalSpace;
	
	cout<<"Enter the length of your yard: ";
	cin>>length;
	cout<<"Enter the radius of a fully grown tree: ";
	cin>>radius;
	cout<<"Enter the required space between fully grown trees: ";
	cin>>space;
	
	numberOfTrees=length/space;
	totalSpace=(3.141*pow(radius,2)*numberOfTrees);
	
	cout<<endl;
	cout<<fixed<<setprecision(1)<<"The number of trees that can be planted in the yard are "<<numberOfTrees<<endl;
	cout<<fixed<<setprecision(2)<<"The total space that will occupy by grown trees are "<<totalSpace<<endl;
	
	return 0;	
}
