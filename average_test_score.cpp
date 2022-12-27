#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
	ifstream inFile;
	ofstream outFile;
	double test1;
	double test2;
	double test3;
	double test4;
	double test5;
	double average;
	string firstname;
	string lastname;
	
	//Opening input and output files
	inFile.open("text.txt");
	outFile.open("testabg.txt");
	
	outFile<<fixed<<showpoint;
	outFile<<setprecision(2);
	
	inFile>>firstname>>lastname;
	inFile>>test1>>test2>>test3>>test4>>test5;
	
	average=(test1+test2+test3+test4+test5)/5.0;
	
	outFile<<"Student Name: "<<firstname<<lastname<<endl;
	outFile<<"Test scores: "<<setw(6)<<test1<<setw(6)<<test2<<setw(6)<<test3<<setw(6)<<test4<<setw(6)<<test5<<endl;
	outFile<<"Average test scores: "<<setw(6)<<average<<endl;
	
	//closing input and output files
	inFile.close();
	outFile.close();
	
	return 0;
}
