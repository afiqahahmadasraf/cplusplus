#include <iostream>
using namespace std;

//function
int smallestIndex (int numberArray[], int arraySize);

int main ()
{
	const int maxArray=10;
	int testArray[maxArray] {10,23,1,4,45,1,34,68,55,40};
	int smallestElement=smallestIndex(testArray,maxArray);
	
	cout<<"The smallest index postition is "<<smallestElement<<" with a value of "<<testArray[smallestElement];
	
	return 0;
}

int smallestIndex(int numberArray[], int arraySize)
{
	int smallest=0;
	for (int i=0; i<arraySize-1; i++)
	{
		if (numberArray[i]<numberArray[smallest])
		smallest=1;
	}
	return smallest;
}
