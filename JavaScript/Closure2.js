// Closures is the combination of a function bundled together with it's lexical environment.
function closure2(){
    function outer(){
        let outer =2346;
        function x(){
            let a = "Hello There!";
            function y(){
                console.log(a, outer);
                console.log(a);
            }
    
            return y; //Returns functon y();
        }
        let z = x();
        z();
        //return x(); //Calls and returns the same.
    }
    //let z= outer(); //Stores called function x() i.e., y().
    //console.log(z); // Prints function y().
    //z(); // Prints Hello There 2346 and Hello There!
    outer();
}


function closure3(){
    function outer(){
        let outer =2346;
        function x(){
            let a = "Hello There!";
            function y(){
                console.log(a, outer);
                console.log(a);
            }
    
            return y; //Returns functon y();
        }
        //let z = x();
        //z();
        return x(); //Calls and returns the same.
    }
    let z= outer(); //Stores called function x() i.e., y().
    console.log(z); // Prints function y().
    z(); // Prints Hello There 2346 and Hello There!
    //outer();
}

//closure2();
closure3();