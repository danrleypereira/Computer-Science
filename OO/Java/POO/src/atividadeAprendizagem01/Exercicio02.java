/*
 * Danrley Pereira
 * RGM: 2355147-0
 * POO
 * */

//defini��o do pacote, estou usando o eclipse e criei esse pacote
// para eu colocar todos os exerc�cios de POO
package atividadeAprendizagem01;

// classe p�blica Exerc�cio02
public class Exercicio02 {
	//m�todo main
	public static void main(String[] args) {
		//atribui o ano a vari�vel
		int ano = 2228;
		//verifica se � divisor de 4
		if(ano%4==0)
			//verifica se n�o � divisor de 100 com excess�o de ser divisor de 400
			if(ano%100!=0 || ano%400==0) {
				System.out.printf("| %d � bissexto |\n", ano);
				//sai do programa ap�s dizer que � bissexto
				//fa�o isso para n�o rodar a linha 20
				System.exit(0);
			}
		System.out.printf("| %d n�o � bissexto |\n", ano);
	}
}