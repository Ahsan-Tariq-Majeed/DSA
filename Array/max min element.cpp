#include <iostream>
using namespace std;


int max(int arr[], int size)
{
	
		int count = 0;
		
	for(int i=0; i<size; i++)
	{
		if(arr[i] > count)
		{
			count = arr[i];
		}
		   
	}
	
	cout << "Max element is " << count <<endl;
}


int min(int arr[], int size)
{
	
		int count = arr[0];
		
	for(int i=0; i<size; i++)
	{
		if(arr[i] < count)
		{
			count = arr[i];
		}
		   
	}
	
	cout << " Mix element is " << count;
}

int main()
{
	int x;

	
	cout <<"Enter the size of an array "<<endl;
	cin >> x;
	
	int arr[x];
	
	cout << "Enter the elements" <<endl;
	
	for(int i=0; i<x; i++)
	{
		cin >> arr[i];
	}
	
	
	max(arr,x);
	min(arr,x);

	

}



