import "@testing-library/jest-dom";
import { render, screen, fireEvent } from "@testing-library/react";
import App from "../components/App";

test("sample test", () => {
  render(<App />);

  const amountInput = screen.getByTestId("Amount");
  const toSelect = screen.getByTestId("To");
  const fromSelect = screen.getByTestId("From");
  const button = screen.getByRole("button");
  const result = screen.getByTestId("result");

  fireEvent.change(amountInput, { target: { value: "5" } });
  fireEvent.click(button);
  expect(result).toHaveTextContent("5");

  fireEvent.change(toSelect, { target: { value: "1000" } });
  fireEvent.click(button);
  expect(result).toHaveTextContent("0.005");

  fireEvent.change(fromSelect, { target: { value: "0.001" } });
  fireEvent.click(button);
  expect(result).toHaveTextContent("0.000005");
});
