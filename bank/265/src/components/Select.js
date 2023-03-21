import React from "react";

function Select({ label, items, onChange }) {
  return (
    <div>
      <label htmlFor={`${label}-select`}>{label}</label>
      <div className="select">
        <select id={`${label}-select`} data-testid={label} onChange={onChange}>
          {items.map((option) => (
            <option value={option.factor} key={option.id}>
              {option.name}
            </option>
          ))}
        </select>
      </div>
    </div>
  );
}

export default Select;
