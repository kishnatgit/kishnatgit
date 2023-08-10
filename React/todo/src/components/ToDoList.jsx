import React from "react";
import ToDoListItems from "./ToDoListItems";

export default function ToDoList({ texts, newArray, searchedText }) {
  var n = 0;
  let ArrayList = [];
  let textArray = [];
  //   debugger;
  if (searchedText !== "") {
    // console.log(newArray);
    // console.log(searchedText);
    textArray = newArray.filter((text) => {
      if (text.includes(searchedText)) return text;
    });
  }
  if (textArray.length > 0) ArrayList = textArray;
  else ArrayList = texts;

  const text = ArrayList.map((text) => (
    <ToDoListItems key={`Text${++n}`} text={text} />
  ));

  return <div className="item">{text}</div>;
}
