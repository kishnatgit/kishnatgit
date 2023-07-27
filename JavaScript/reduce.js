const array = [4, 6, 3, 2, 5, 20, 25, 35, 15, 55, 17, 13, 45];

let output = array.reduce(function (acc, curr) {
  if (curr > acc) {
    acc = curr;
  }
  return acc;
}, 0);
console.log(array);
console.log("Greatest = "+output);

let output2 = array.map((curr) => curr%2===0);
console.log(output2);

let output3 = array.filter((curr) => curr%2===0);
console.log(output3 );

let output4 = array.filter((curr) => curr%2===1);
console.log(output4 );

