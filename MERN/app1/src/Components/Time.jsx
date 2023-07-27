import React from "react";

export default function Time() {
  function getTime() {
    return new Date().toLocaleTimeString();
  }
  return (
    <div className="">
      <div>
        Current Time:
        <h3>{getTime()}</h3>
      </div>
    </div>
  );
}
