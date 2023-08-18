import React from "react";

export default class SearchBar extends React.Component {
  state = { Text: "" };

  whenFormSubmit = (e) => {
    e.preventDefault();

    this.props.onSubmit(this.state.Text);
  };

  render() {
    return (
      <div className="search-bar ui segment">
        <form className="ui form" onSubmit={this.whenFormSubmit}>
          <div className="field">
            <label>Video Search</label>
            <input
              type="text"
              value={this.state.Text}
              onChange={(e) => this.setState({ Text: e.target.value })}
            />
          </div>
        </form>
      </div>
    );
  }
}
