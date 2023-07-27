function funn(a, b) {
  if (a - b > (b & a) && (a ^ 2) < b + a) {
    b = 1 + 2 + b;
    a = 2 + 1 + b;
    b = a + 2 + a;
    return funn(b, b) + funn(a + 1, b);
  }
  return b + 1;
}

const output = funn(2, 0);
console.log("Output64:"+output); //30
