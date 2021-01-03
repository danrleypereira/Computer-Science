/*
 * Danrley Pereira
 * RGM: 2355147-0
 * POO
 * */


//definição do pacote, estou usando o eclipse e criei esse pacote
// para eu colocar todos os exercícios de POO
package atividadeAprendizagem01;

import java.util.Scanner; // 1. importando a classe Scanner
//classe pública Exercício01
public class Exercicio01 {
	//método main
	public static void main(String[] args) {
		// 2. instanciando e criando um objeto Scanner
		Scanner ler = new Scanner(System.in);
		//declarando váriaveis, uma para pegar o número e a outra para ser o iterador
		int n, i;
		System.out.printf("Informe o número para ver divisores:\n");
		n = ler.nextInt(); // 3.1 entrada de dados (lendo um valor inteiro)
		ler.close();//fecha o Scanner
		System.out.printf("\n+----Divisores----+\n");
		//laço de repetição que decrementa o i para verificar todas as possibilidades de divisores
		for (i=n; i>0; i--)
			//verifica se é divisor
			if(n%i==0)
				System.out.printf("| %d é divisor de %d |\n", i, n);
		System.out.printf("+-----------------+\n");
	}
}