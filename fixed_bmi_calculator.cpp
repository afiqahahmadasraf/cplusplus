#include <iostream>
#include <iomanip> //use this for set
#include <math.h> //calculations
using namespace std;
int main ()
{
	int age=18;
	string name="Afiqah Ahmad";
	double weight=49;
	double height=1.63;
	double bmi;
	
	bmi=weight/pow(height,2);
	
	cout<<"\n\n\n";
	cout<<setw(16)<<"NAME";
	cout<<setw(20)<<"AGE";
	cout<<setw(20)<<"WEIGHT";
	cout<<setw(20)<<"HEIGHT";
	cout<<setw(22)<<"BMI RATE"<<endl;
	
	cout<<setw(20)<<"-------------";
	cout<<setw(20)<<"-------------";
	cout<<setw(20)<<"-------------";
    cout<<setw(20)<<"-------------";
	cout<<setw(20)<<"-------------"<<endl;
	
	cout<<setw(20)<<name;
	cout<<setw(15)<<age;
	cout<<setw(19)<<weight;
	cout<<setw(20)<<height;
	cout<<setw(20)<<bmi<<endl;
	
	return 0;
}

