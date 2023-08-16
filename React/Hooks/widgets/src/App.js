import React, { useState } from "react";
import Accordion from "./components/Accordion";
import Search from "./components/Search";
import Dropdown from "./components/Dropdown";
import Translate from "./components/Translate";
import Route from "./components/Route";
import Header from "./components/Header";

const items = [
  {
    title: "What is React?",
    content: "React is a front-end JavaScript framework",
  },
  {
    title: "Why use React?",
    content: "React is a favourite JS library among engineers",
  },
  {
    title: "How do we use React?",
    content: "We use react by creating components",
  },
];

const options = [
  {
    label: "The color Red",
    value: "red",
  },
  {
    label: "The color Green",
    value: "green",
  },
  {
    label: "A shade of Blue",
    value: "Blue",
  },
];

export default function App() {
  const [selectedItem, setSelectedItem] = useState(options[0]);
  // const [buttonClicked, onButtonClicked] = useState(false);

  return (
    <div>
      <Header />
      <Route path="/">
        <Accordion items={items} />
      </Route>
      <Route path="/search">
        <Search />
      </Route>
      <Route path="/dropdown">
        <Dropdown
          label="Select a Color"
          options={options}
          selectedItem={selectedItem}
          onSelect={setSelectedItem}
        />
      </Route>
      <Route path="/translate">
        <Translate />
      </Route>
    </div>
  );
}
