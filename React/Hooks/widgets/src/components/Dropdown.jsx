import { useState, useEffect, useRef } from "react";

export default function Dropdown({ options, selectedItem, onSelect, label }) {
  const [open, setOpen] = useState(false);
  const ref = useRef();

  useEffect(() => {
    const onBodyClick = (e) => {
      if (ref.current.contains(e.target)) {
        return;
      }
      setOpen(false);
    };

    document.body.addEventListener("click", onBodyClick);

    return () => document.body.removeEventListener("click", onBodyClick);
  }, []);

  const renderedItems = options.map((option) => {
    if (selectedItem.value === option.value) {
      return null;
    }

    return (
      <div key={option.value} className="item" onClick={() => onSelect(option)}>
        {option.label}
      </div>
    );
  });

  return (
    <div ref={ref} className="ui form">
      <div className="field">
        <label className="label">{label}</label>
        <div
          onClick={() => setOpen(!open)}
          className={`ui selection dropdown ${open ? "visible active" : ""}`}
        >
          <i className="dropdown icon"></i>
          <div className="text">{selectedItem.label}</div>
          <div className={`menu ${open ? "visible transition" : ""}`}>
            {renderedItems}
          </div>
        </div>
      </div>
      {/* <div
        style={{ color: `${selectedItem.value}` }}
      >{`Selected color is ${selectedItem.value}!`}</div> */}
    </div>
  );
}
