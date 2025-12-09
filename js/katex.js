if (document.readyState === "complete" || document.readyState === "interactive") {
  renderMath();
} else {
  document.addEventListener("DOMContentLoaded", renderMath);
}

function renderMath() {
  var body = document.body;
  renderMathInElement(body, {
    delimiters: [
      { left: "$$", right: "$$", display: true },
      { left: "$", right: "$", display: false },
      { left: "\\(", right: "\\)", display: false },
      { left: "\\[", right: "\\]", display: true }
    ],
  })
}