//program to reverse an array or string 
#include <iostream>
using namespace std;

int main()
{
	int x;
	
	cout << "Enter the length of an array ";
	cin >> x;
	
	int arr[x];
	
	cout << "Enter the element of an array";
	
	for (int i=0; i<x; i++)
	{
		cin >> arr[i];
	}
	
	cout << "Elements of an array " <<endl;
	
		for (int i=0; i<x; i++)
	{
		cout << arr[i] <<endl;
	}
	
	
}
