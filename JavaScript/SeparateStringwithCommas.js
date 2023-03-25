var strorg = "12345,12345,12345,12345,12345,12345,12345,12345,12345,12345,12345";
var str=strorg.replaceAll(",", '');
console.log(str.length);
var array = [];
var n=1;
//console.log(array.length);
for(var i=0;i<str.length;i=i+5){
    array.push("'"+str.substring(i,i+5)+"'");
    n++;
}
//for(var i=0;i<array.length;i++){
//    console.log(array[i]);
//}
console.log(array);
var strorg = array.toString();
console.log(strorg);
//for(var i=0;i<=str.length;i=i+5){
  //  console.log(str.substring(i,i+5));
//}