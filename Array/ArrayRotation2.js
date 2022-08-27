const Rotate = (num,k) => {
    k = k % num.length

        reverse(num, 0 ,num.length-1)
        reverse(num, 0 , k-1)
        reverse(num , k ,num.length-1)
}

const reverse = (num,start,end) => {
    while(start < end)
    {
        const temp = num[start]
        num[start] = num[end]
        num[end] = temp
        start++
        end--
    }
}

function printArray(arr, size) 
{
  for (var i = 0; i < size; i++) 
  console.log(arr[i] + " ");
}

const arr = [1,2,3,4,5,6,7]
var index = 3
const arrSize = arr.length

Rotate(arr, index);
printArray(arr, arrSize);




//output should be [5,6,7,1,2,3,4]