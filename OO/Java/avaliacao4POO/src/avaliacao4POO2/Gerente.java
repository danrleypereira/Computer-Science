package avaliacao4POO2;

public class Gerente extends Empregado implements ApresentacaoDados {

	private double valorVendas;
	private int qntVendas;
	
	public Gerente(String nome, int idade, String sexo, double salario, String matricula, double valorVendas,
			int qntVendas) {
		super(nome, idade, sexo, salario, matricula);
		this.valorVendas = valorVendas;
		this.qntVendas = qntVendas;
	}
	
	@Override
	public void apresentarDados() {
		System.out.println("nome: "+this.getNome()+"\nsalário: "+this.getSalario()+
				"\nvalor das vendas: "+this.getValorVendas()+"\nquantidade de vendas: "+
				this.getQntVendas()+"\n");
	}

	public double getValorVendas() {
		return valorVendas;
	}

	public void setValorVendas(double valorVendas) {
		this.valorVendas = valorVendas;
	}

	public int getQntVendas() {
		return qntVendas;
	}

	public void setQntVendas(int qntVendas) {
		this.qntVendas = qntVendas;
	}

}
