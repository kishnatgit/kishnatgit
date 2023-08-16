import { useState, useEffect } from "react";
import axios from "axios";

export default function Convert({ language, text }) {
  const [translated, setTranslatedText] = useState("");
  const [debouncedText, setDebouncedText] = useState(text);

  useEffect(() => {
    const timeOutId = setTimeout(() => {
      setDebouncedText(text);
      //   setDebouncedText(translated);
    }, 1000);

    return () => clearTimeout(timeOutId);
  }, [text]);

  useEffect(() => {
    const translate = async () => {
      const { data } = await axios.post(
        "https://translation.googleapis.com/language/translate/v2",
        {},
        {
          params: {
            q: debouncedText,
            target: language.value,
            key: "AIzaSyCHUCmpR7cT_yDFHC98CZJy2LTms-IwDlM",
          },
        }
      );
      setTranslatedText(data.data.translations[0].translatedText);
    };
    if (debouncedText) {
      translate();
    }
  }, [debouncedText, language]);

  return (
    <div>
      <h2 className="ui header">{translated}</h2>
    </div>
  );
}
