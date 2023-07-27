function funn() {
  let p = 1,
    q = 5,
    r = 4;
  if ((q & p) < r) {
    p = r + q + q;
  }
  if (q + r > p - q && 1 < p) {
    p = (r & q) + r;
  } else {
    q = 4 + r;
  }
  p = r + 7 + r;
  return p + q + r;
}

const output = funn();
console.log("Output65:" + output); //27
