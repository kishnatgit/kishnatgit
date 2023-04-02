// Function Statement - A declared function is known as Function statement.
function newFunction1() {
  //This is a function statement as a small function is decared over here.
}



// Function Expression - When a function is defined as an expression.
let x = function () {
  // Anonymous function without a name.
  console.log("Anonymous Function is called.");
};
let y = function xyz() {
  // named function.
  console.log("A named Function is called.");
};
x();
y();
//Note*- The difference betweeen a function statement and a function expression is a function expression allows to declare an anonymous function.



//First class Function or First class Citizen - These are the functions that can be used as values and passed as arguments in a function or the functions that are returned from a function as value or a funtion that can be assigned to a variable as a value are known as First Class Functions.
let anotherFunction = function (Para1) {
  return function () {// Returned the function as a value.
    console.log(Para1()());
    console.log("Fuction has been returned.");
  };
};

let called = anotherFunction(function () { //Passed a funtion as a value and assigned the returned function inside called variable.
  return function passed () {
    return 100;
  };
});

called();
