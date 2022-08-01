//print 3D array and show their index also

#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << "Enter the value of rows "<< endl;
	cin >> a;
	
	cout << "Enter the value of column " <<endl;
	cin >> b;
	
	cout << "Enter the value of space " <<endl;
	cin >> c;
	
	cout << "enter the elements " << a << " for rows" <<endl; 
	cout << "enter the elements " << b << " for column" <<endl;
	cout << "enter the elements " << c << " for space"  <<endl;
	
	int arr[a][b][c];
	
	for (int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			for(int k=0;k<c;k++)
			{
				cin >> arr[i][j][k];
			}
		}
	}
	
	
	cout << "Output would be " << endl;
	
	
		for (int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			for(int k=0;k<c;k++)
			{
			 cout << "Element at x[" << i << "][" << j
                     << "][" << k << "] = ";
				cout << arr[i][j][k] <<endl;
			}
		}
	}
	
}
	
	
