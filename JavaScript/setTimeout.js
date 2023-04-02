function method1() {
  for (let i = 1; i <= 5; i++) {
    setTimeout(function printi() {
      console.log(i);
    }, i * 1000);
  }
}

function method2() {
  for (let i = 1; i <= 5; i++) {
    function passingregerence(i) {
      setTimeout(function printi() {
        console.log(i);
      }, i * 1000);
    }
    passingregerence(i);
  }
}

//method1(); //Using simple loop.
method2(); //Passing another reference.
