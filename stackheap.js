/*...........Stack(Primitive){gives an copy value}.........*/
let name="Ujjwal"
let anotherName=name

anotherName="Srivastava"
console.log(name)
console.log(anotherName)

/*...........Heap(Non Primitive){gives a reference value}.........*/

let userOne={
    name:"Ujjwal",
    age:22
}
let userTwo=userOne
userTwo.name="Shobhit"          //changes made in original value

console.log(userOne.name)
console.log(userTwo.name)
