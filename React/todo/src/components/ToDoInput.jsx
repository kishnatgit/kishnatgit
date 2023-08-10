import "./ToDoInput.css";
import React from "react";

export default class ToDoInput extends React.Component {
  state = { texts: "", searchedText: "" };

  clearAddField = () => {
    this.setState({ texts: "" });
  };

  clearSearchField = () => {
    this.setState({ searchedText: "" });
  };

  AddButtonClicked = () => {
    if (this.state.texts !== "") {
      this.props.AddButtonClicked(this.state.texts);
      this.clearAddField();
      this.props.ResetButtonClicked();
      this.clearSearchField();
    }
  };

  SearchButtonClicked = () => {
    if (this.state.searchedText !== "")
      this.props.SearchButtonClicked(this.state.searchedText);
    this.clearSearchField();
  };

  ResetButtonClicked = () => {
    this.props.ResetButtonClicked();
    this.clearSearchField();
  };

  render() {
    return (
      <div className="Buttons">
        <div className="Button-Left">
          <div>
            <input
              style={{ width: "130%" }}
              type="text"
              value={this.state.texts}
              onChange={(e) => {
                this.setState({ texts: e.target.value });
              }}
            />
          </div>
          <div>
            <button onClick={this.AddButtonClicked}>Add ToDo</button>
          </div>
        </div>
        <div className="Button-Right">
          <div>
            <input
              style={{ width: "130%" }}
              type="text"
              value={this.state.searchedText}
              onChange={(e) => this.setState({ searchedText: e.target.value })}
            />
          </div>
          <div>
            <button onClick={this.SearchButtonClicked}>Search</button>
            <button onClick={this.ResetButtonClicked}>Reset</button>
          </div>
        </div>
      </div>
    );
  }
}
