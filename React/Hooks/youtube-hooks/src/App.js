import React, { useState, useEffect } from "react";
import SearchBar from "./components/SearchBar";
import VideoList from "./components/VideoList";
import VideoDetails from "./components/VideoDetails";
import useVideos from "./hooks/useVideos";

export default function App() {
  const [selectedVideo, setSelectedVideo] = useState(null);
  const [videos, Search] = useVideos("Cars");

  useEffect(() => {
    setSelectedVideo(videos[0]);
  }, [videos]);

  return (
    <div className="ui container" style={{ marginTop: "10px" }}>
      <SearchBar onTextSubmit={Search} />
      <div className="ui grid">
        <div className="ui row">
          <div className="ten wide column">
            <VideoDetails video={selectedVideo} />
          </div>
          <div className="five wide column">
            <VideoList onVideoSelect={setSelectedVideo} videos={videos} />
          </div>
        </div>
      </div>
    </div>
  );
}
