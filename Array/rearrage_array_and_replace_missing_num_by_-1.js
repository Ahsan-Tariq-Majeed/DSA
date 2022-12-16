
// Javascript program for rearrange an
// array such that arr[i] = i.

function fixArray(arr, n)
{

	for (let i = 0; i < n;)
	{
		if (arr[i] >= 0 && arr[i] != i)
			arr[arr[i]] = (arr[arr[i]] + arr[i])
						- (arr[i] = arr[arr[i]]);
		else
			i++;
	}
}

// Driver Code

	let arr = [ -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 ];
	let n = arr.length;

	// Function Call
	fixArray(arr, n);

	// Print output
	for (let i = 0; i < n; i++)
		console.log(arr[i] + " ");
	
