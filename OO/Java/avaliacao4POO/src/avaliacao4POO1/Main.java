package avaliacao4POO1;
import avaliacao4POO1.*;

public class Main {

	public static void main(String[] args) {
		
		ContaPoupanca poupanca = new ContaPoupanca("Vitor Araújo Fonseca", 300, 0.06);
		
		System.out.println(poupanca.getClass().getSimpleName() +" de "+
				poupanca.getCliente() +
				"\nNúmero da Conta: "+ poupanca.getNum_Conta() + "\nSaldo: "+
				poupanca.getSaldo() + "\nTaxa de Rendimento: "+ poupanca.getTaxaRendimento()+ "\n");
		
		poupanca.sacar(250);
		poupanca.calcularNovoSaldo();
		poupanca.depositar(500);
		poupanca.calcularNovoSaldo();
		
		System.out.println(poupanca.getClass().getSimpleName() +" de "+
				poupanca.getCliente() +
				"\nNúmero da Conta: "+ poupanca.getNum_Conta() + "\nSaldo: "+
				poupanca.getSaldo() + "\nTaxa de Rendimento: "+ poupanca.getTaxaRendimento());
		
		ContaEspecial corrente = new ContaEspecial("Roberto Jefferson Monteiro Francisco", 220800,
				10000);
		
		System.out.println("\n"+corrente.getClass().getSimpleName()+ " de "+
				corrente.cliente +
				"\nNúmero da Conta: "+ corrente.getNum_Conta() + "\nSaldo: "+
				corrente.getSaldo() + "\nLimite: "+corrente.getLimite());
		corrente.sacar(5000);
		corrente.depositar(890);
		
		System.out.println("\n"+corrente.getClass().getSimpleName()+ " de "+
				corrente.cliente +
				"\nNúmero da Conta: "+ corrente.getNum_Conta() + "\nSaldo: "+
				corrente.getSaldo() + "\nLimite: "+corrente.getLimite());
	}

}

