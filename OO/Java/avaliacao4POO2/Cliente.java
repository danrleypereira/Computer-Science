package avaliacao4POO2;

public final class Cliente extends Pessoa implements ApresentacaoDados {
	
	private double valorDivida;
	private int anoNascim;
	
	public Cliente(
			String nome, 
			int idade, 
			String sexo, 
			double valorDivida, 
			int anoNascim
	) {
		super(nome, idade, sexo);
		this.valorDivida = valorDivida;
		this.anoNascim = anoNascim;
	}
	
	@Override
	public void apresentarDados() {
		System.out.println("nome: "+this.getNome()+"\nidade: "+this.getIdade()+
				"\nsexo: "+this.getSexo()+"\nvalor da dívida: "+this.getValorDivida()+
				"\nano de nascimento: "+this.getAnoNascim()+"\n");
	}

	public double getValorDivida() {
		return valorDivida;
	}

	public void setValorDivida(double valorDivida) {
		this.valorDivida = valorDivida;
	}

	public int getAnoNascim() {
		return anoNascim;
	}

	public void setAnoNascim(int anoNascim) {
		this.anoNascim = anoNascim;
	}

}
