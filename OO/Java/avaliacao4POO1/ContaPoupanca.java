package avaliacao4POO1;

import java.text.DecimalFormat;

public class ContaPoupanca extends ContaBancaria{
	
	private double taxaRendimento;
	private int diaRendimento;
	
	public ContaPoupanca(String cliente, double saldo, double taxaRendimento){
		super(cliente, saldo);
		if(taxaRendimento < 1){
			taxaRendimento += 1;
		}
		this.taxaRendimento = taxaRendimento;
	}

	public double getTaxaRendimento(){
		DecimalFormat df = new DecimalFormat("#,###.##");
		return Double.parseDouble( df.format(taxaRendimento) );
	}
	public void calcularNovoSaldo(){
		DecimalFormat df = new DecimalFormat("#,###.##");
		super.saldo *= taxaRendimento;
		System.out.println("rendimento é: "+ Double.parseDouble(df.format(super.saldo)) +"\n");
	}
}
