#include <iostream>
using namespace std;

int main ()
{
	int staffId[10];
	int totalhours [10];
	
	for (int x=0; x<10; x++)
	{
	cout<<"Enter your of staffId: ";
	cin>>staffId[x];
	cout<<endl;
	cout<<"Enter your total hours of work: ";
	cin>>totalhours[x];
	cout<<endl;
    }
	
	cout<<"The total salary for each staff is:"<<endl;
	cout<<"Staff ID \t       Payment"<<endl;
	
    for (int y=0; y<10; y++)
    {
    	int x=y;
    	cout<<x+1<<"."<<staffId[y]<<"\t\t\t"<<totalhours[y]*25<<endl;
    }
    
  return 0;  
}
