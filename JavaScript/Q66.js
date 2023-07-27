function funn() {
  let a = 2,
    b = 7,
    c = 9;
  if (9 > c || (b & a) < a) {
    c = b + 1 + b;
  } else {
    a = a + c;
    b = 5 ^ b;
  }
  return a + b + c;
}

const outaut = funn();
console.log("Output66:" + outaut); //22
