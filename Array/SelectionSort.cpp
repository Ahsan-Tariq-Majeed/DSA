#include <iostream>
using namespace std;

ArraySorted(int array[], int size)
{
	for(int i=0; i<size-1; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(array[j]<array[i])
			{
			 int temp = array[i];
			 array[i] = array [j];
			 array [j] = temp;
			}
		
		}
	}
}

PrintAnArray(int array[], int size)
{

	for(int i=0; i< size; i++)
	{
		cout << array[i] << " "; 
	}
}

int main()
{
	int size;
	cout << "Enter the size of an element " << endl;
	cin >> size;
	
	int array[size];
	
	cout << "Enter the elements of an array " << endl;
	
	for(int i=0; i <size; i++)
	{
		cin >> array[i];
		
	}
	
	cout << "Original Array " <<endl;
	PrintAnArray(array , size);
	ArraySorted(array,size);
	
	cout << endl << "Selection Sorted Array " <<endl;
	PrintAnArray(array , size);
}
