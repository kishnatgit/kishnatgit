import React from "react";
import unsplash from "../api/Unsplash";
import SearchBar from "./SearchBar";
import ImagesList from "./ImagesList";

export default class App extends React.Component {
  state = { images: [] };
  onFormSubmit = async (term) => {
    const responses = await unsplash.get("/search/photos", {
      params: { query: term },
    });

    this.setState({ images: responses.data.results });
  };

  render() {
    return (
      <div className="ui container" style={{ marginTop: "10px" }}>
        <SearchBar whenFormSubmitted={this.onFormSubmit} />
        <ImagesList Images={this.state.images} />
      </div>
    );
  }
}
