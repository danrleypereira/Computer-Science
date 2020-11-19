var HandleSubmit = function(){
    var nome = document.querySelector('input[name="nome"]').value;
    var sexo = document.querySelector('input[name="genero"]:checked').value;
    var idade = document.getElementById("dataNascimento").value;
    idade = getAge(idade);

    document.getElementById("age").innerHTML = idade;
    document.getElementById("name").innerHTML = nome;
    document.getElementById("myDiv").style = "display: block";
   
    var frase = "";

    if(sexo == 'm' && idade > 1 && idade <= 100)
        frase += "Primeira quinzena de ";
    else if(sexo == 'f' && idade > 1 && idade <= 100)
        frase += "Segunda quinzena de ";
    
    if(idade <= 1){
        frase += "Liberado para vacinação.";
    }else if(idade >1 && idade <= 10){
        frase += "<b style='color: red'>Janeiro<b>";
    }else if(idade > 10 && idade <= 20){
        frase += "<b style='color: red'>Fevereiro<b>";
    }else if(idade > 20 && idade <= 30){
        frase += "<b style='color: red'>Março<b>";
    }else if(idade > 30 && idade <=40){
        frase += "<b style='color: red'>Abril<b>";
    }else if(idade > 40 && idade <=50){
        frase += "<b style='color: red'>Maio<b>";
    }else if(idade > 50 && idade <=60){
        frase += "<b style='color: red'>Junho<b>";
    }else if(idade > 60 && idade <=70){
        frase += "<b style='color: red'>Julho<b>";
    }else if(idade > 70 && idade <=80){
        frase += "<b style='color: red'>Agosto<b>";
    }else if(idade > 80 && idade <=90){
        frase += "<b style='color: red'>Setembro<b>";
    }else if(idade > 90 && idade <=100){
        frase += "<b style='color: red'>Outubro<b>";
    }else if(idade > 100){
        frase += "Vacinação em casa ligue no 0300";
    }
    document.getElementById("vacinacao").innerHTML = frase;
}

function getAge(dateString) {
    var today = new Date();
    var birthDate = new Date(dateString);
    var age = today.getFullYear() - birthDate.getFullYear();
    var m = today.getMonth() - birthDate.getMonth();
    if (m < 0 || (m === 0 && today.getDate() < birthDate.getDate())) {
        age--;
    }
    return age;
}