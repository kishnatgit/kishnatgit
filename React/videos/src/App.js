import React from "react";
import SearchBar from "./components/SearchBar";
import Youtube from "./api/Youtube";
import VideoList from "./components/VideoList";
import VideoDetails from "./components/VideoDetails";

export default class App extends React.Component {
  state = { videos: [], selectedVideo: null };

  componentDidMount() {
    this.formSubmitted("Cars");
  }

  formSubmitted = async (text) => {
    const response = await Youtube.get("/search", {
      params: { q: text },
    });
    this.setState({
      videos: response.data.items,
      selectedVideo: response.data.items[0],
    });
  };

  onVideoSelect = (video) => {
    this.setState({ selectedVideo: video });
  };

  render() {
    return (
      <div className="ui container" style={{ marginTop: "10px" }}>
        <SearchBar onSubmit={this.formSubmitted} />
        <div className="ui grid">
          <div className="ui row">
            <div className="ten wide column">
              <VideoDetails video={this.state.selectedVideo} />
            </div>
            <div className="five wide column">
              <VideoList
                onVideoSelect={this.onVideoSelect}
                videos={this.state.videos}
              />
            </div>
          </div>
        </div>
      </div>
    );
  }
}
