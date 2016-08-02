// Takes in an array that has two sorted subarrays,
//  from [p..q] and [q+1..r], and merges the array
var merge = function(array, p, q, r) {
    // This code has been purposefully obfuscated,
    //  as you'll write it yourself in next challenge.
    document.write("</br>array da merge = " + array);
    var a=[], b=[], c=p, d, e;
    //Passar todas as entradas do array até o indice "q" inserido para o array "a"
    for(d=0; c<=q; d++, c++){
        a[d]=array[c];
    }
    document.write("</br> a = "+ a)
    //Passar todas as entradas do array do indice "q+1" até o indice "r" inserido para o array "b"
    for(e=0;c<=r;e++,c++){
        b[e]=array[c];
    }
    document.write("</br>b = " + b);
    //c = primeiro indice
    c=p;
    //enquanto d< do que o tamanho do array do lado esquerdo
    //&&
    //enquanto e< do que o tamanho do array do lado direito
    for(e=d=0;d<a.length&&e<b.length;){
        //se o elemento do array do lado esquerdo é menor do que o do lado direito de mesmo
        //indice então o array passado para a função recebe no indice "c" o valor maior
        if(a[d]<b[e]){
            array[c]=a[d];
            d++;
        } else {
            array[c]=b[e];
            e++;
        }
        c++;
    }
    //se o indice d não chegar ao tamanho máximo de "a", salve no array recebido da função
    //o restante dos valores em "a"
    for(;d<a.length;){
        array[c]=a[d];
        d++;
        c++;
    }
    //se o indice e não chegar ao tamanho máximo de "b", salve no array recebido da função
    //o restante dos valores em "b"
    for(;e<b.length;){
        array[c]=b[e];
        e++;
        c++;
    }
};


// Takes in an array and recursively merge sorts it
var mergeSort = function(array, p, r){
  if( !(p <=r) ){
    var meio = (p+r)/2;
    mergeSort(array, p, meio);
    mergeSort(array, meio+1, r);
    document.write("tá na mal");
    merge(array, p, meio, r);
  }else{return}
};

var array = [14, 7, 3, 12, 9, 11, 6, 2];
mergeSort(array, 0, array.length-1);
document.write("<p style=\"size: 2em; color: red; \">Array after sorting: " + array);
//Program.assertEqual(array, [2, 3, 6, 7, 9, 11, 12, 14]);
