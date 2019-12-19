let counter = 0;
const spanCounter = document.querySelector("span.counter");
const btn1 = document.querySelector("button:nth-of-type(1)");
const btn2 = document.querySelector("button:nth-of-type(2)");

btn1.addEventListener("click", function () {
    counter++;
    spanCounter.textContent = counter;
})

btn2.addEventListener("click", function () {
    counter--;
    spanCounter.textContent = counter;
})