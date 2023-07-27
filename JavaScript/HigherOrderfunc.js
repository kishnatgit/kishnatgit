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

const results = function (circlRadius, logic) {
  const output = [];
  for (let i = 0; i < circlRadius.length; i++) {
    output.push(logic(circlRadius[i]));
  }
  return output;
};

console.log(results(circlRadius, area));
console.log(results(circlRadius, circumference));
console.log(results(circlRadius, diameter));