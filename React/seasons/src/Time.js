import React from "react";

export default class Time extends React.Component {
  state = { Time: new Date().toLocaleTimeString() };

  componentDidMount() {
    setInterval(() => {
      this.setState({ Time: new Date().toLocaleTimeString() });
      //   console.log(this.state.Time);
    }, 1000);
  }

  render() {
    return <div>Time: {this.state.Time}</div>;
  }
}
