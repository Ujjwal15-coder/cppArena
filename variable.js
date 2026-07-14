const accountId=12345 //cannot update the values
let accountEmailid="ujjwal@gmail.com"
var accountPassword="123332" //in modern js we generally don't use var (variable keyword) because of block of scopes
accountCity="Lucknow"
let accountState //generates undefined because value is not assigned

accountCity="Ayodhya" //it can be update 
//accountId=2 //generates error because we can't update the values of constant  

console.log(accountId) 

console.table([accountId,accountEmailid,accountPassword,accountCity,accountState])