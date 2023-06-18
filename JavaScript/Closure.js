// Closures is the combination of a function bundled together with it's lexical environment.

window.onload = function(){
    document.getElementById("clickMe").addEventListener("click", function clicked() {
        function x(){
            let a = "Hello There!";
            function y(){
                console.log(a);
            }
            return y;
        }
        
        let z = x();  // Function y() has been returned and stored inside z alog with the lexical environment of y() as well.
        console.log(z);
        z(); // When z() is called it will print the value of a as it stores the data of the lexical environment of y() i.e., datas of x();
    });
}