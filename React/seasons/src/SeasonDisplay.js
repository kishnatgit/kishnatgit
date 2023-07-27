import "./SeasonDisplay.css";
import React from "react";
import Time from "./Time";

const seasonConfig = {
  Summer: {
    text: "Let's hit the beach!",
    iconName: "sun",
  },
  Winter: {
    text: "Burr, it is so chilly!",
    iconName: "snowflake",
  },
};

const getSeason = (lat, monthNum) => {
  if (monthNum > 2 && monthNum < 9) {
    return lat > 0 ? "Summer" : "Winter";
  } else return lat > 0 ? "Winter" : "Summer";
};

const SeasonDisplay = (props) => {
  console.log(props.lat);
  const season = getSeason(props.lat, new Date().getMonth());
  const { text, iconName } = seasonConfig[season];

  return (
    <div className={`season-display ${season}`}>
      <i className={`icon-left massive ${iconName} icon`} />
      <h1>{text}</h1>
      <i className={` icon-right massive ${iconName} icon`} />
      <div className="displayTime">
        <Time />
      </div>
    </div>
  );
};

export default SeasonDisplay;
