import React from "react";

export default function Name() {
  function formatName(user) {
    return user.firstName + " " + user.lastName;
  }

  const user = {
    firstName: "Uttam",
    lastName: "Kumar",
  };

  const element = <h1>Hello, {formatName(user)}!</h1>;
  return <div>{element}</div>;
}
