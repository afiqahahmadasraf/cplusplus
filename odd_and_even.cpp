#include <iostream>
#include <iomanip>
using namespace std;

const int n=20;

int main ()
{
	int integer;
	int number;
	int zeros=0;
	int odds=0;
	int evens=0;
	
	cout<<"You are required to enter 20 integer numbers "<<endl;
	cout<<"Please enter 20 integer numbers: "<<endl;
	
	for (integer=1; integer<=n; integer++)
	{
		cin>>number;
		cout<<number<" ";
		
		switch (number%2)
		{
			case 0:
				evens++;
				if (number==0)
				zeros++;
				break;
			
			case 1:
			case -1:
				odds++;
	    }
	    
	}
	
	cout<<endl;
	cout<<"Based on your numbers, there are "<<evens<<" even numbers and has "<<zeros<<" number of zeros."<<endl;
	cout<<endl;
	cout<<"The number of odd numbers are "<<odds<<endl;
	
	return 0;
}
