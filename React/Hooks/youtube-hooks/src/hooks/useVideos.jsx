import { useEffect, useState } from "react";
import Youtube from "../api/Youtube";

export default function useVideos(defaultText) {
  const [videos, setVideos] = useState([]);

  useEffect(() => {
    Search(defaultText);
  }, [defaultText]);

  const Search = async (text) => {
    const response = await Youtube.get("/search", {
      params: { q: text },
    });
    setVideos(response.data.items);
  };

  return [videos, Search];
}
