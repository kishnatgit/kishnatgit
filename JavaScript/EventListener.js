window.onload = function () {
  // The load event is fired when the whole page has loaded, including all dependent resources such as stylesheets, scripts, iframes, and images. This is in contrast to DOMContentLoaded , which is fired as soon as the page DOM has been loaded, without waiting for resources to finish loading

  // Here in this case as the script tag has been called above the body of the html, the js is getting loaded at first before DOM. In order to overcome this issue, we are calling window.onload .
  console.log("Hello...");

  document
    .getElementById("clickMe")
    .addEventListener("click", function eventCalled() {
      console.log("Button Cicked.");
      //document.getElementById("clickMe").after("Button Clicked!");
      document.getElementById("onclick").append("Button Clicked!");
    });
}