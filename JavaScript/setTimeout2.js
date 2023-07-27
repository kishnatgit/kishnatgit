console.log("Hello There!");

function called() {
  console.log("setTimeout expired");
}

setTimeout(called, 0); //Even if setTimeout is set to 0s, it will wait in the callback stack untill the call stack is freed up.

console.log("End");

let date = new Date().getTime();
let EndDate = date;
while (EndDate < date + 10000) {
  EndDate = new Date().getTime();
}
console.log("Timer Expired!");
 