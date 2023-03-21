describe("sample Test", () => {
  beforeEach(() => {
    cy.visit("index.html");
  });

  it("Sample Test #1:", () => {
    const tests = [
      {
        attr: "display",
        value: "flex",
      },
    ];

    tests.forEach((test) => {
      cy.get(".letter").should("have.css", `${test.attr}`, `${test.value}`);
    });
  });
});
