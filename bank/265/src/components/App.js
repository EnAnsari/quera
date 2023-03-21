// powered by Rahmat
// Email: Rahmat2022a@gmail.com
// Github: https://github.com/EnAnsari
// question link: https://quera.org/problemset/109568/

import React, { useState } from "react";
import Select from "./Select";
import Input from "./Input";
import { units } from "../units";

function App() {
  const [result, setResult] = useState(0);
  const [input, setInput] = useState(0)
  const [toValue, setToValue] = useState(1);
  const [fromValue, setFromValue] = useState(1);
  

  function onChangeInput(e) {
    setInput(e.target.value);
  }

  function onChangeSelectTo(e) {
    setToValue(e.target.value);
  }

  function onChangeSelectFrom(e) {
    setFromValue(e.target.value);
  }

  function convert() {
    setResult(input * toValue / fromValue);
  }

  return (
    <>
      <div className="converter-form">
        <Input label="Amount" onChange={onChangeInput}/>

        <div className="row">
          <Select label="From" items={units} onChange={onChangeSelectTo}/>
          <Select label="To" items={units} onChange={onChangeSelectFrom}/>

          <button onClick={convert}>Convert</button>
        </div>
      </div>

      <div id="result">
        Result is: <span data-testid="result">{result}</span>
      </div>
    </>
  );
}

export default App;