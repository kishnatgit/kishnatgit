import React from "react";

export default function Greet() {
  function formatName(user) {
    return user.firstName + " " + user.lastName;
  }

  const user = {
    firstName: "Bhai",
    lastName: "And Dee",
  };
  let cond;
  if (user.firstName != "" && user.lastName != "") cond = true;
  else cond = false;

  //   const element = <h1>Hello, {formatName(user)}!</h1>;

  function getGreeting(user) {
    if (cond) {
      return <h1>Good Evening, {formatName(user)}!</h1>;
    }
    return <h1>Hello, Stranger.</h1>;
  }
  return <div>{getGreeting(user)}</div>;
}
