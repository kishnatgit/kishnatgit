import axios from "axios";

export default axios.create({
  baseURL: "https://api.unsplash.com",
  headers: {
    Authorization: "Client-ID dHcdYPaQPyFuC0CwUOn1jde_Olu8UKGsv2L8Q17-wN8",
  },
});
