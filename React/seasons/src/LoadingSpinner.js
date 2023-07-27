import React from "react";

export default function LoadingSpinner(props) {
  return (
    <div className="ui active dimmer">
      <div className="ui text loader">{props.msg}</div>
    </div>
  );
}
LoadingSpinner.defaultProps = {
  msg: "Loading...",
};
