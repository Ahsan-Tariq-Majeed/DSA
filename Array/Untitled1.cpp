//print an array or string in reverese an array with recurssion
#include <iostream>
using namespace std;


void reverseAnArray(int array[], int start, int end)
{
	if (start >= end)
	return;
	
		int temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		
		reverseAnArray(array, start + 1 , end - 1);
	
}

int PrintAnArray(int array[],int x)
{
	cout << "String is reversed "<<endl;
	for(int i=0; i<x; i++)
	{
		cout << array[i];
	}
}

int main()
{
	int x;
	
	cout << "Enter the lenght of an array " <<endl;
	cin >> x;
	
	int array[x];
	
	cout << "Enter the element of an array "<< endl;
	for(int i =0; i<x; i++)
	{
		cin >>array[i];
	} 
	
	cout << "Passing string to the reverse funtion "<< endl;
	
	reverseAnArray(array,0,x-1);
	PrintAnArray(array,x);
	
}

