#include <iostream>
using namespace std;

//function 
double larger (double x, double y);

int main ()
{
	double num;
	double max;
	int count;
	
	cout<<"Enter 10 numbers with a space between each one"<<endl;
	cin>>num;
	max=num;
	
	for (count=1; count<10; count++)
	{
		cin>>num;
		max=larger(max,num);
	}
	
	cout<<"The largest number is "<<max<<endl;
	
	return 0;
}

double larger (double x, double y)
{
	if (x>=y)
	{
		return x;
	}
	
	else 
	{
		return y;
	}
}
