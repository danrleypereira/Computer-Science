var main = function(){
  var array = userArray(prompt("Quantos elementos têm no Array?", "3"));
  confirm( array.bubbleSort().toString() );
  print(  array.bubbleSort()  );
}

var print = function(array){
  var myTable = "<table><tr><th>posicao</th><th>n&uacute;mero</th></tr>";
  for(var i=0; i<array.length; i++){
    myTable += "<tr> <td> "+ i +" </td>  <td> "+ array[i] +" </td> </tr>"
  }
  myTable += "</table>";
  document.write(myTable);
}

var userArray = function(length){
  var array = [];
  for(var i=0; i < length; i++){
    array.push(parseFloat(prompt(  "Insira o número:", Math.random()*300 ))  );
  }
  return array;
}

Array.prototype.bubbleSort = function(){
  var done = false;
  while(!done){
    done = true;
    for(var i=0; i<(this.length-1); i++){
      if(this[i] > this[i+1]){
        var aux = this[i];
        this[i] = this[i+1];
        this[i+1] = aux;
        done = false;
        print(this);
      }
    }
  }
  return this;
}

function isNumber(evt) {
    evt = (evt) ? evt : window.event;
    var charCode = (evt.which) ? evt.which : evt.keyCode;
    if (charCode > 31 && (charCode < 48 || charCode > 57)) {
        return false;
    }
    return true;
}
