const score=400
console.log(score)

const balance=new Number(100)
console.log(balance) //it defines 100 is an number

console.log(balance.toString())  //converts in an string
console.log(balance.toFixed(2))  //fixed to two decimal places

const otherrnumber=23.65478
console.log(otherrnumber.toPrecision(3))
console.log(otherrnumber.toPrecision(2))

const hundreds=1000000
console.log(hundreds.toLocaleString('en-IN'))

//****************************Maths*****************************/

console.log(Math);
console.log(Math.abs(-4)); //convert the numbers into positive value
console.log(Math.round(4.6)) //round of the number into the nearest value
console.log(Math.ceil(4.1))  //this method round of the values into the nearest top value
console.log(Math.floor(4.7))  //this method round of the values into the nearest small value

console.log(Math.max(4,5,6,7))
console.log(Math.min(2,3,1,0))

console.log(Math.random()) //value ranges from 0 to 1
console.log((Math.random()*10)+1) 

const min = 10
const max = 20

console.log(Math.floor(Math.random()*(max-min+1)+min)) //always give the value ranges from 10 to 20
             //floor does not give decimal values