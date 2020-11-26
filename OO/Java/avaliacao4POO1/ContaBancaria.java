package avaliacao4POO1;

public class ContaBancaria {
	//Attributes
	protected String cliente;
	protected int num_Conta;
	protected double saldo;
	
	public ContaBancaria(String cliente, double saldo){
		this.cliente = cliente;
		this.num_Conta = this.getRandomNumber(1000, 9999);
		this.saldo = saldo;
	}
	
	public void sacar(double valor) {
		if ( ( this.saldo - valor ) < 0 ) {
			System.out.println("Saldo insuficiente! \n" );
		} else {
			this.saldo -= valor;
			System.out.println("Saldo: "+ this.saldo +"\n");
		}
	}
	
	public void depositar(double deposito) {
		this.saldo += deposito;
		System.out.println("Saldo: "+ this.saldo +"\n");
	}
	
	public int getRandomNumber(int min, int max) {
	    return (int) ((Math.random() * (max - min)) + min);
	}
	
	public String getCliente() {
		return cliente;
	}

	public int getNum_Conta() {
		return num_Conta;
	}

	public double getSaldo() {
		return saldo;
	}
}
