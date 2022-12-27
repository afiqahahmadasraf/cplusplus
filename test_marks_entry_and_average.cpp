#include <iostream>
using namespace std;
int main ()
{
	int mark;
	char response;
	int total=0;
	int count=0;
	int avg;
	
	do
	{
	here:
	cout<<"Please enter the marks from the test: ";
	cin>>mark;
	
	if (mark>=0&&mark<=100)
	{
		total=total+mark;
		count++;
	}
	else
	{
		cout<<"Invalid mark"<<endl;
	}

	cout<<"Do you want to enter another mark? (Y/N): ";
	cin>>response;
    }
    
	while (response=='Y'||response=='y');
	avg=total/count;
	
	cout<<"The average mark(s) is "<<avg<<endl;
	cout<<"The total mark(s) is "<<total<<" and the programme has looped "<<count<<" times"<<endl;
	
    return 0;
}
