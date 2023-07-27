function funn(a, b) {
  if (4 - a < a - b && a < b) {
    a = 2 + 1 + a;
    b = a + 3 + b;
    a = 3 + 1 + b;
    return funn(a, b) + funn(a + a) + 1;
  }
  a = a + 2 + a;
  return a - 1;
}

const output = funn(7, 8);
console.log("Output63:" + output); //153
