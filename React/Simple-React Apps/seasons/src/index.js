import React from "react";
import { createRoot } from "react-dom/client";
import SeasonDisplay from "./SeasonDisplay";
import LoadingSpinner from "./LoadingSpinner";
// import Time from "./Time";

class App extends React.Component {
  constructor(props) {
    super(props);

    this.state = { Latitude: null, ErrorMessage: "" };
  }

  componentDidMount() {
    window.navigator.geolocation.getCurrentPosition(
      (position) => this.setState({ Latitude: position.coords.latitude }),
      (err) => this.setState({ ErrorMessage: err.message })
    );
  }

  renderContent() {
    if (this.state.Latitude && !this.state.ErrorMessage)
      return (
        <div>
          <SeasonDisplay lat={this.state.Latitude} />
        </div>
      );

    if (!this.state.Latitude && this.state.ErrorMessage)
      return <LoadingSpinner msg={`Error: ${this.state.ErrorMessage}`} />;

    return <LoadingSpinner msg="Please give permission for location request" />;
    // return <LoadingSpinner />;
  }

  render() {
    return <div>{this.renderContent()}</div>;
  }
}

createRoot(document.querySelector("#root")).render(<App />);
