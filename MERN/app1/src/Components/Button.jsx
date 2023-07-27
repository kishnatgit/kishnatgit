import React from "react";

function MyButton() {
  return <button onClick={() => alert("Button Clicked!")}>I'm a button</button>;
}

export default function Button() {
  return <div>{MyButton()}</div>;
}
