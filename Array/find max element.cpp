

// C++ Program to display marks of 5 students

#include <iostream>
using namespace std;

// declare function to display marks
// take a 1d array as parameter
int display(int arr[]) {
    int i, max=0,n=5;
	
	for(i=0;i<n;i++)
	{
		if(arr[i] > max)
		max=arr[i];
	}
	return max;
	
	cout << "max number is " << max << endl;
}

int main() {

    // declare and initialize an array
    int marks[5] = {88, 76, 90, 61, 69};
    
    // call display function
    // pass array as argument
    display(marks);

    return 0;
}

