function CallBack(){
    setTimeout(function(){   //Callback function which executes at the beginning but is called after a certin time.
        console.log("Timer caller!");
    },5000);
    
    function x(y){
        console.log("Y");
        y();
        console.log(y);
    }
    
    x(function y(){
        console.log("X");
       // x(y); //Loop
       //console.log(y); //Y() statement.
       //console.log(x(y)); //Loop
    });    
}
CallBack();