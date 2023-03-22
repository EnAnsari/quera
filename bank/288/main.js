document.querySelector(".btn").addEventListener("click", () => {
  let inputText = document.querySelector(".input").value;

  let result = 0;

  for (let i = 0; i < inputText.length; i++) {
    if (inputText.charAt(i) === "ÛŒ" && inputText.charAt(i + 1) !== "" && inputText.charAt(i + 1) !== " " && inputText.charAt(i + 1) !== undefined) {
      result += 2;
    }
    if (obj[inputText.charAt(i)] !== undefined) {
      result += parseInt(obj[inputText.charAt(i)])
    }
    
  }
  
  document.querySelector('.result').innerText = result;
});