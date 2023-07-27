const startButton = document.getElementById("start");
const resetButton = document.getElementById("reset");
const stopButton = document.getElementById("stop");
const bar1 = document.querySelector(".element1");
const bar2 = document.querySelector(".element2");
const bar3 = document.querySelector(".element3");
const bar4 = document.querySelector(".element4");
const bar5 = document.querySelector(".element5");

let animationInterval;

function startAnimation() {
  animationInterval = setInterval(function () {
    bar1.style.animationName = "element1Animation";
    bar1.style.animationDuration = "3s";
    bar1.style.animationIterationCount = "infinite";

    bar2.style.animationName = "element2Animation";
    bar2.style.animationDuration = "3s";
    bar2.style.animationIterationCount = "infinite";

    bar3.style.animationName = "element3Animation";
    bar3.style.animationDuration = "3s";
    bar3.style.animationIterationCount = "infinite";

    bar4.style.animationName = "element4Animation";
    bar4.style.animationDuration = "3s";
    bar4.style.animationIterationCount = "infinite";

    bar5.style.animationName = "element5Animation";
    bar5.style.animationDuration = "3s";
    bar5.style.animationIterationCount = "infinite";
  }, 1000);
}

function stopAnimation() {
  clearInterval(animationInterval);

  bar1.style.animationPlayState = "paused";
  bar2.style.animationPlayState = "paused";
  bar3.style.animationPlayState = "paused";
  bar4.style.animationPlayState = "paused";
  bar5.style.animationPlayState = "paused";
}

function resetBars() {
  bar1.style.animation = "none";
  bar1.offsetHeight;
  bar1.style.animation = "";

  bar2.style.animation = "none";
  bar2.offsetHeight;
  bar2.style.animation = "";

  bar3.style.animation = "none";
  bar3.offsetHeight;
  bar3.style.animation = "";

  bar4.style.animation = "none";
  bar4.offsetHeight;
  bar4.style.animation = "";

  bar5.style.animation = "none";
  bar5.offsetHeight;
  bar5.style.animation = "";
}

startButton.addEventListener("click", startAnimation);
stopButton.addEventListener("click", stopAnimation);
resetButton.addEventListener("click", resetBars);
