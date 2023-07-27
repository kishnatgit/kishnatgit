import logo from "./logo.svg";
import "./App.css";
import Button from "./Components/Button";
import Greet from "./Components/Greet";
import Name from "./Components/Name";
import Time from "./Components/Time";

function App() {
  const ButtonText = () => "Click Me!";
  return (
    <div className="App">
      <div>
        <label htmlFor="name">Name:</label>
        <input id="name" type="text"></input>
        <button style={{ backgroundColor: "blue", color: "white" }}>
          {ButtonText()}
        </button>
        <Time></Time>
      </div>
    </div>
  );
}

export default App;
