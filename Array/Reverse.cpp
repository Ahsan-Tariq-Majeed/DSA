#include <iostream>

using namespace std;


#define N 5

int main()
{
  int arr[N];
  int i;
	
		cout << "Enter an array " << endl;
		
	for (i = 0; i< N; i++)
	{
	
		cin >> arr[i];
	}
	
	for (i = 0; i< N; i++)
	{
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	
		for (i = N-1 ;i>= 0; i--)
	{
		cout << arr[i]<< " ";
	}
	

}
