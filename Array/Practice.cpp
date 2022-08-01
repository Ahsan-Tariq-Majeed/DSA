#include <iostream>
using namespace std;

#define N 5

int main()
{
	int arr[] = {1,2,3,4,5};
	
	for(int i=0; i< N; i++)
	{
		cout << arr[i];
		cout <<" ";
	
	}
	
		cout<<endl;
		
		for (int i = N-1 ;i>= 0; i--)
	{
		cout << arr[i]<< " ";
	}

}



