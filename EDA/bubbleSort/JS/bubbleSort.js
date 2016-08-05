var main = function(){
  var array = userArray(prompt("Quantos elementos têm no Array?", "3"));
  printTable(  array.bubbleSort()  );
}

var printTable = function(array, superior, minor){
  var myTable = "<table><tr><th>posi&ccedil;&atilde;o</th><th>n&uacute;mero</th></tr>";
  for(var i=0; i<array.length; i++){
    if(  i==superior ){
      myTable += "<tr class='superior'> <td> "+ (i+1) +" </td>  <td> "+ array[i] +" </td> </tr>";
    }else if(  i==minor   ){
      myTable += "<tr class='minor'> <td> "+ (i+1) +" </td>  <td> "+ array[i] +" </td> </tr>";
    }else{
      myTable += "<tr> <td> "+ (i+1) +" </td>  <td> "+ array[i] +" </td> </tr>";
    }
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
        printTable(this, i+1, i);
        var aux = this[i];
        this[i] = this[i+1];
        this[i+1] = aux;
        done = false;
      }
    }
  }
  return this;
}
