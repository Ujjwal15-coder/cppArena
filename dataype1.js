/*................(We get copy value) Primitive dataype => string,number,BigInt,null,undefined,Symbol,boolean..............*/

const score=100;
const scoreValue=-100;
const alphabet="BC"
let temperature=null
let islogged= false

let scoree=Symbol("123")
let canscore=Symbol("123")

console.log(scoree==canscore)
console.log(score)
console.log(scoreValue)
console.log(alphabet)
console.log(typeof temperature)
console.log(islogged)

/*...............(WE get reference value) Non primitive dataype => Array,Object,Function.............................*/

const heroes=["Avengers","Hanuman","Shaktiman"] //Arrays

let myobject={           //Objects
    name: "Ujjwal",
    age: 22,
}

console.table([heroes,myobject])