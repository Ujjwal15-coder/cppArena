const name="Ujjwal"
const age=21

console.log(`Hello my name is ${name} and my age is ${age}`)

const gameName=new String(`valorant`)
console.log(gameName)
console.log(gameName[0])
console.log(gameName[1])
console.log(gameName.length)
console.log(gameName.charAt(3))
console.log(gameName.indexOf(`t`))
console.log(gameName.toUpperCase())

const newString=gameName.substring(0,5)
console.log(newString)

const anotherSring=gameName.slice(-8,4)
console.log(anotherSring)

const newString1="  ujjwal  "
console.log(newString1)
console.log(newString1.trim())  //unecessary spaces will remove

const url="http://ujjwal.com/ujjwal%11srivastava"
console.log(url.replace('%11','-1')) //replace %11 with -1

console.log(url.includes('Aryan')) //to check the values (whether it is present or not)

console.log(gameName.split('-')) //make the string in list format
