
var a=function(n){
    
    var t=parseInt(n/1000,10);
    var h=parseInt(n%1000/100,10);
    var d=parseInt(n%100/10,10);
    var i=n%10;
   if((t+h)===Math.abs(d-i)){
       console.log(n);
   };

    
};
var k=0;
while(k<9999){
    a(k);
    k++
    }

