import React from "react";
import ReactDOM from "react-dom";
import "./assets/css/index.css";
import App from "./components/App";

ReactDOM.render(
  <React.StrictMode>
    <div className="main-container">
      <div className="form-container">
        <div className="form-body">
          <App />
        </div>
      </div>
    </div>
  </React.StrictMode>,
  document.getElementById("root")
);
