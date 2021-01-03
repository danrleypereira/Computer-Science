/*
 * Danrley Pereira
 * RGM: 2355147-0
 * POO
 * */

//definição do pacote, estou usando o eclipse e criei esse pacote
// para eu colocar todos os exercícios de POO
package atividadeAprendizagem01;

// classe pública Exercício02
public class Exercicio02 {
	//método main
	public static void main(String[] args) {
		//atribui o ano a variável
		int ano = 2228;
		//verifica se é divisor de 4
		if(ano%4==0)
			//verifica se não é divisor de 100 com excessão de ser divisor de 400
			if(ano%100!=0 || ano%400==0) {
				System.out.printf("| %d é bissexto |\n", ano);
				//sai do programa após dizer que é bissexto
				//faço isso para não rodar a linha 20
				System.exit(0);
			}
		System.out.printf("| %d não é bissexto |\n", ano);
	}
}