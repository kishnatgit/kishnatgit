import axios from "axios";

const KEY = "AIzaSyCzqdId9wpFd1S7SHttqhyar2nBgu_lPPw";

export default axios.create({
  baseURL: "https://www.googleapis.com/youtube/v3",
  params: {
    part: "snippet",
    maxResults: 5,
    key: KEY,
  },
});
