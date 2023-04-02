function Outer() {
  let a = 0;
  this.increment = function () {
    a++;
    console.log(a);
  };
  this.decrement = function () {
    a--;
    console.log(a);
  };
}

let outer1 = new Outer();
outer1.increment();
outer1.increment();
outer1.increment();
outer1.decrement();
outer1.increment();

let outer2 = new Outer();
outer2.increment();
outer2.increment();
outer2.decrement();
outer2.decrement(); 
outer2.decrement(); 
outer2.decrement();

outer1.increment();