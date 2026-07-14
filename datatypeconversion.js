let num="33"
let validNum=Number(num)  //Converting String into a number
console.log(num)
console.log(typeof validNum)

let njj=1
let convt=Boolean(njj)  //converting 1 to boolean value
console.log(njj)
console.log(convt)
console.log(typeof convt)

/* 1 => True
   0 => False
   "" => False
   "ujjwal" => True
*/

let somenum=21
let stringNum=String(somenum)  //converting number into String
console.log(somenum)
console.log(stringNum)
console.log(typeof stringNum)

/*****************************OPERATORS****************************/

let value=4
let negValue=-value
console.log(negValue)

console.log(2+2)
console.log(2-2)
console.log(2*2)
console.log(2/2)
console.log(2%3)

let str1="Ujjwal"
let str2="Srivastava"
let str3=str1+str2
console.log(str3)

console.log("1"+2)
console.log(1+"2")
console.log("1"+"2")
console.log("1"+2+2)
console.log(1+2+"2") //due to ecema of js

console.log(+true)

let g=100
console.log(g++) //return value of g => 100 and then increment =>101
console.log(++g) //return value of g after increment => 101+1 => 102