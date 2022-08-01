#include <iostream>
using namespace std;

int FindTheElemet(int array[], int size, int element)
{
	for(int i = 0; i< size; i++)
	{
	
	}
		cout << "Elemet is " << array[element -1];
}

int SelectionSort(int array[], int size)
{
		for(int i=0; i<size-1; i++)
	{
		for(int j =i+1; j< size; j++)
		{
			if(array[j] < array[i])
			{
				int temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}
}



int PrintAnArray(int array[], int size)
{
	for(int i=0;i<size; i++)
	{
		cout << array[i] << " ";
	}
}

int main()
{
	int size,element;
	
	cout << "Enter the size of an array " <<endl;
	cin >> size;
	
	int array[size];
	
	cout <<"Enter the elements of an array " <<endl;
	
	for(int i =0 ; i < size ; i++)
	{
		cin >> array[i];
	}
	
	cout << "Original array " <<endl;
	PrintAnArray(array, size);
	
	
	cout << "Selection sorted " <<endl;

	SelectionSort(array, size);
	PrintAnArray(array, size);
	
	cout << endl <<"Enter the elemet you want to find " <<endl;
	cin >> element;
	
	FindTheElemet(array,size, element);
	

	
}
