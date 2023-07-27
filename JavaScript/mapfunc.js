const circlRadius = [3, 5, 7, 4, 8];

const area = function (radius) {
  return Math.PI * radius * radius;
};

const circumference = function (radius) {
  return 2 * (Math.PI * radius);
};

const diameter = function (radius) {
  return 2 * radius;
};

// console.log(circlRadius.map(area)); ///Using map().
// console.log(circlRadius.map(circumference));
// console.log(circlRadius.map(diameter));

Array.prototype.results = function (logic) { //Prototyping map().
  const output = [];
  for (let i = 0; i < this.length; i++) {
    output.push(logic(this[i]));
  }
  return output;
};

console.log(circlRadius.results(area));
console.log(circlRadius.results(circumference));
console.log(circlRadius.results(diameter));