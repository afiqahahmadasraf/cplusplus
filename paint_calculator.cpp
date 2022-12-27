#include <iostream>
using namespace std;
int main ()
{
	int length;
	int height;
	double paint;
	double totalArea;
	double l;
	double h;
	
	cout<<"Input the length in feet: ";
	cin>>length;
	cout<<"Input the height in feet: ";
	cin>>height;
	
	l=length;
	h=height;
	
	totalArea=l*h;	
	paint=totalArea/120;
	
	cout<<endl;
	cout<<"The total area of the room is: "<<totalArea<<" square feet"<<endl;	
	cout<<"The amount of paint needed to paint the walls of the room: "<<paint<<" gallons"<<endl;
	
	return 0;
}

