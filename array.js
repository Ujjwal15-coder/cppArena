const arr=[1,3,5,7,9,"Ujjwal","srivastava"]
console.log(arr)
console.log(arr[0])
console.log(typeof arr) //object
//array is mutable
//Array methods

arr.push(10)
console.log(arr) //changes made in original array

arr.pop() //removes the last element of an array
console.log(arr)

arr.unshift(11) //add the elements at the 0th index
console.log(arr)

arr.shift()   //removes the element of 0th index
console.log(arr)

console.log(arr.includes(6)) //used to check the element is present or not
console.log(arr.indexOf(7))

const newArr=arr.join()
console.log(arr) //values in array
console.log(newArr) //array values are converted into string

//slice/splice in an array

console.log("A",arr)

const myn1=arr.slice(1,3) //it prin the values excludin the last index follows n-1 indexing
console.log(myn1)
console.log("B ",arr)

const myn2=arr.splice(1,3) //it print the values including the last index
console.log("C ",arr) //index 1,2,3 values are excluded
console.log(myn2)     //indec 1,2,3 values are printed only