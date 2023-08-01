import axios from "axios";

const KEY = "AIzaSyCI3lFagUgAZevzgU4cqka5X1M0pW0PvRs";

export default axios.create({
  baseURL: "https://www.googleapis.com/youtube/v3",
  params: {
    part: "snippet",
    maxResults: 5,
    key: KEY,
  },
});
