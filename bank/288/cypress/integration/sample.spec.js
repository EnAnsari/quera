const testWords = [
  { word: "تست", count: 4 },
  { word: "عرفان", count: 2 },
];

describe("Dot Tests:", () => {
  beforeEach(() => {
    cy.visit("index.html");
  });

  it("sample test", () => {
    cy.get(".btn").click();
    cy.get(".result").should("have.text", `${0}`);

    testWords.forEach((word) => {
      cy.get(".input").clear();
      cy.get(".input").type(word.word);
      cy.get(".btn").click();
      cy.get(".result").should("have.text", `${word.count}`);
    });
  });
});
