import React, { useState } from "react";

export default function SearchBar({ onTextSubmit }) {
  const [term, setTerm] = useState("");

  const whenFormSubmit = (e) => {
    e.preventDefault();

    onTextSubmit(term);
  };

  return (
    <div className="search-bar ui segment">
      <form className="ui form" onSubmit={whenFormSubmit}>
        <div className="field">
          <label>Video Search</label>
          <input
            type="text"
            value={term}
            onChange={(e) => setTerm(e.target.value)}
          />
        </div>
      </form>
    </div>
  );
}
