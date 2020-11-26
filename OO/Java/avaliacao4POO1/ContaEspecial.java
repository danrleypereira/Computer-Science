package avaliacao4POO1;

public class ContaEspecial extends ContaBancaria {

	private double limite;


	public ContaEspecial(String cliente, double saldo, double limite) {
		super(cliente, saldo);
		this.limite = limite;
	}
	
	
	public void sacar(double valor) {
		if ( ( this.saldo - valor ) < -this.limite ) {
			System.out.println("Limite insuficiente! \n" );
		} else {
			this.saldo -= valor;
			System.out.println("Saldo: "+ this.saldo + "\n");
		}
	}
	
	public double getLimite() {
		return limite;
	}


	public void setLimite(double limite) {
		this.limite = limite;
	}

}
