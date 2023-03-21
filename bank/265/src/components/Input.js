import React from "react";

function Input({ label, onChange }) {
  return (
    <>
      <label htmlFor={label}>{label}</label>
      <input type="text" id={label} data-testid={label} onChange={onChange} />
    </>
  );
}

export default Input;
