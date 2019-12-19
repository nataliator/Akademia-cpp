let rotateDiv = 0;
const changeDeg = 30;
const btn = document.querySelector("button");
const squareDiv = document.querySelector(".square");
squareDiv.style.transition = "1s";
btn.addEventListener("click", function () {
    rotateDiv += changeDeg;
    squareDiv.style.transform = "rotate(" + rotateDiv + "deg)";
    squareDiv.classList.add("animation");
});