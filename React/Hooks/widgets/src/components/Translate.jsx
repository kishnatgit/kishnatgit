import { useState } from "react";
import Dropdown from "./Dropdown";
import Convert from "./Convert";

const options = [
  {
    label: "Afrikaans",
    value: "af",
  },
  {
    label: "Arabic",
    value: "ar",
  },
  {
    label: "Hindi",
    value: "hi",
  },
  {
    label: "Odia (Oriya)",
    value: "or",
  },
  {
    label: "Czech",
    value: "cs",
  },
  {
    label: "French",
    value: "fr",
  },
  {
    label: "German",
    value: "de",
  },
  {
    label: "Japanese",
    value: "ja",
  },
  {
    label: "Korean",
    value: "ko",
  },
  {
    label: "Chinese (Traditional)",
    value: "zh-TW",
  },
  {
    label: "Nepali",
    value: "ne",
  },
  {
    label: "Persian",
    value: "fa",
  },
];

export default function Translate() {
  const [language, setLanguage] = useState(options[0]);
  const [text, setText] = useState("");

  return (
    <div>
      <div className="ui form">
        <div className="field">
          <label>Enter Text</label>
          <input
            type="text"
            value={text}
            onChange={(e) => setText(e.target.value)}
          />
        </div>
      </div>
      <Dropdown
        label="Select a Language"
        selectedItem={language}
        onSelect={setLanguage}
        options={options}
      />
      <hr />
      <h1 className="ui header">Output:</h1>
      <Convert text={text} language={language} />
    </div>
  );
}
