import React from "react";

function Document2(props) {
  return (
    // <div className="ui placeholder segment">
    <div>
      <h4 className="ui header">{props.HeaderText}</h4>
      <p>{props.ParaText}</p>
    </div>
  );
}

export default Document2;
