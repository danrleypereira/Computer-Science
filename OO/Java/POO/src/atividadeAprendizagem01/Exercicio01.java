/*
 * Danrley Pereira
 * RGM: 2355147-0
 * POO
 * */


//defini��o do pacote, estou usando o eclipse e criei esse pacote
// para eu colocar todos os exerc�cios de POO
package atividadeAprendizagem01;

import java.util.Scanner; // 1. importando a classe Scanner
//classe p�blica Exerc�cio01
public class Exercicio01 {
	//m�todo main
	public static void main(String[] args) {
		// 2. instanciando e criando um objeto Scanner
		Scanner ler = new Scanner(System.in);
		//declarando v�riaveis, uma para pegar o n�mero e a outra para ser o iterador
		int n, i;
		System.out.printf("Informe o n�mero para ver divisores:\n");
		n = ler.nextInt(); // 3.1 entrada de dados (lendo um valor inteiro)
		ler.close();//fecha o Scanner
		System.out.printf("\n+----Divisores----+\n");
		//la�o de repeti��o que decrementa o i para verificar todas as possibilidades de divisores
		for (i=n; i>0; i--)
			//verifica se � divisor
			if(n%i==0)
				System.out.printf("| %d � divisor de %d |\n", i, n);
		System.out.printf("+-----------------+\n");
	}
}