const users = [
  { Firstname: "Shagufta", Lastname: "Mahveen", Age: "20" },
  { Firstname: "Uttam Kumar", Lastname: "Maharaa", Age: "24" },
  { Firstname: "Binayak", Lastname: "Maharana", Age: "26" },
  { Firstname: "Pooja Rani", Lastname: "Maharana", Age: "28" },
  { Firstname: "Shagu", Lastname: "Mahveen", Age: "20" },
];
console.log(users);
//console.log(users[0].Age);

//List of Full Names:

let output = users.map((x) => x.Firstname + " " + x.Lastname);

console.log(output);

//Printing no. of user of each age.
let output2 = users.reduce(function (acc, crr) {
  if (acc[crr.Age]) {
    acc[crr.Age] = ++acc[crr.Age];
  } else {
    acc[crr.Age] = 1;
  }
  return acc;
}, {});

console.log(output2);

//Printing Firstnames of users having age less than 26.
let output3 = users.filter((x) => x.Age < 26).map((x) => x.Firstname);

console.log(output3);

//Using reduce

let output4 = users.reduce(function (acc, crr) {
  if (crr.Age < 26) {
    acc.push(crr.Firstname);
  }
  return acc;
}, []);

console.log(output4);
