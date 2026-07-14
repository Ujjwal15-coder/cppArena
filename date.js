//starts from january 1970
let myDate = new Date()
console.log(myDate)
console.log(myDate.toString())
console.log(myDate.toLocaleString())
console.log(typeof myDate)

let myCreatedDate=new Date(2025,4,9,5,3)
let myCreatedDate1=new Date("2025-04-09")
let myCreatedDate2=new Date("09-04-2025")

console.log(myCreatedDate.toLocaleString())
console.log(myCreatedDate1.toLocaleString())
console.log(myCreatedDate2.toLocaleString())

let myTimeStamp=Date.now()
console.log(myTimeStamp)
console.log(myCreatedDate.getTime())

console.log(myCreatedDate1.toLocaleString()) 
console.log(Math.floor(Date.now()/1000));

let newDates=new Date()
console.log(newDates)

console.log(newDates.getMonth()+1)
console.log(newDates.getYear())
console.log(newDates.getDay())

newDates.toLocaleString('default',{
    weekday:"long",
})