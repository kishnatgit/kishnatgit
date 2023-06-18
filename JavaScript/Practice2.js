window.onload = function (){
    document.getElementById("clickMe").onclick = function (){
        let a1=document.getElementById("a1").value;
        let a2=document.getElementById("a2").value;
        let a3=document.getElementById("a3").value;
        let a4=document.getElementById("a4").value;
        let a5=document.getElementById("a5").value;
        let array=[a1,a2,a3,a4,a5];
        for (let i = 0; i < array.length; i++) {
            for (let n = 0; n < array[i].length; n++) {
                console.log(array[i][n]);
            }
            //const element = array[i];
        }
    }
}