import React from "react";

export default function Document(props) {
  return (
    // <div className="ui placeholder segment">
    <div>
      <div className="ui icon header">
        <i className="pdf file outline icon"></i>
        {props.DocText}
      </div>
      <div className="ui primary button">{props.ButtonText}</div>
    </div>
  );
}
