describe('Sample Test:', () => {
  it('check first product', () => {
    cy.visit('index.html');

    cy.get(`.product[data-product-id="1"]`)
      .find('.price')
      .should('have.text', `32000 تومان`);

    cy.get(`.product[data-product-id="1"]`)
      .find('.date')
      .should('have.text', '1596902113');

    cy.get('#changeProducts').click();

    cy.get(`.product[data-product-id="1"]`)
      .find('.price')
      .should('have.text', `16000 تومان`);

    cy.get(`.product[data-product-id="1"]`)
      .find('.date')
      .should('have.text', '8/8/2020');
  });
});
