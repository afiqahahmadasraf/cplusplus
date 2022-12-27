#include <iostream>
using namespace std;
int main ()
{
	int total=0;
	int count=0;
	int avg=0;
	int mark;
	char response;
	
	do
	{
		cout<<"Enter the marks: ";
		cin>>mark;
		total=total+mark;
		count++;
		
		cout<<"Do you want to enter another mark? (Y/N): ";
		cin>>response;
	}
	
	while (response=='Y'||response=='y');
	avg=total/count;
	
	cout<<"The average mark(s) is "<<avg<<endl;
	cout<<"The overall mark(s) is "<<total<<endl;
	cout<<"The total loop(s) that has been done is "<<count<<endl;
	
	return 0;
}
