const buttons = document.querySelectorAll('.button');

buttons.forEach(button => {
    button.addEventListener("click", clicked);
});

function clicked(e) {
    const color = e.target.id;

    document.body.style.backgroundColor = color;
}

// powered by Rahmat
// Email: Rahmat2022a@gmail.com
// Github: https://github.com/EnAnsari
// question link: https://quera.org/problemset/49606/