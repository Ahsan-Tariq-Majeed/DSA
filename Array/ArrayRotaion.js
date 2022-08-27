const arr = [1,2,3,4,5,6,7]
const index = 3


arrayRotate(arr,index)

function arrayRotate (arr,index)  {
    for(var i = 0 ; i < index ; i++) {
        arr.unshift(arr.pop());
        console.log(`Step ${i} is ${arr}` )
    }
}


