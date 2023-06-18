window.onload = function () {

    document.getElementById("clickMe").onclick = function(){
        function Practice1() {
            function SameName() {
              console.log("SameName Function is Called.");
            }
        
            var a = 20;
            function SameName() {
              //Over-ridden function SameName.
              console.log(a);
              console.log("SameName is called again.");
            }
            SameName(); //Will print a's value as the SameName() has been called after the variable a is initialized.
          }
        
          function Practice2() {
            SameName(); //Will print a's value as undefined as the SameName() has been called before the variable a is initialized.
        
            function SameName() {
              console.log("SameName Function is Called.");
            }
        
            var a = 20;
            function SameName() {
                                    //Over-ridden function SameName.
              console.log(a);
              console.log("SameName is called again.");
            }
          }
        
         //Practice1();
         Practice2();
    }
};