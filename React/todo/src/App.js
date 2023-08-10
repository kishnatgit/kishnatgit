import "./App.css";
import React from "react";
import NavBar from "./components/NavBar";
import ToDoInput from "./components/ToDoInput";
import ToDoList from "./components/ToDoList";

export default class App extends React.Component {
  state = { toDoList: [], newArray: [], searchedText: "" };

  whenAddButtonClicked = (texts) => {
    this.setState({
      toDoList: [...this.state.toDoList, texts],
    });
    // debugger;
    // this.setState({ toDoList: this.state.toDoList.push(texts) });
  };

  whenSearchButtonClicked = (searchedText) => {
    this.setState({ newArray: this.state.toDoList });
    this.setState({ searchedText: searchedText });
  };

  whenResetButtonClicked = () => {
    this.setState({ newArray: [], searchedText: "" });
  };

  render() {
    return (
      <div>
        <NavBar />
        <ToDoInput
          AddButtonClicked={this.whenAddButtonClicked}
          SearchButtonClicked={this.whenSearchButtonClicked}
          ResetButtonClicked={this.whenResetButtonClicked}
        />
        <div
          style={{
            display: "flex",
            justifyContent: "center",
            marginTop: "10%",
          }}
        >
          {(this.state.toDoList.length > 0 ||
            this.state.toDoList[0] === "") && (
            <div className="ui inverted segment List-Items">
              <div className="ui inverted relaxed divided list">
                <ToDoList
                  texts={this.state.toDoList}
                  newArray={this.state.newArray}
                  searchedText={this.state.searchedText}
                />
              </div>
            </div>
          )}
        </div>
      </div>
    );
  }
}
