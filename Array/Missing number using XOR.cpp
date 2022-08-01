#include <iostream>
#include <vector>
using namespace std;



int MissingNumber(int a[], int n)
{
	int x1 = a[0];

    int x2 = 1;
 
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
 
    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
 
    return (x1 ^ x2);
	
}

int main()
{
	int size;
	
	cout << "Enter the size of an array " << endl;
	cin >> size;
	
	int array[size];
	
	cout << "Enter the elements " << endl;
	
	for(int i=0;i< size;i++)
	{
		cin >> array [i];
	}
	
	cout << "Elements are " <<endl;
	
		for(int i=0;i< size;i++)
	{
		cout << array [i];
	}
	
	int Number = MissingNumber(array,size);
	
	cout << "Missing number is " << Number;

}
