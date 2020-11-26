package avaliacao4POO2;

import java.text.DecimalFormat;

public abstract class Empregado extends Pessoa {

	protected double salario;
	protected String matricula;
	
	public Empregado(String nome, int idade, String sexo, double salario, String matricula) {
		super(nome, idade, sexo);
		this.salario = salario;
		this.matricula = matricula;
	}
	
	public void valorINSS() {
		System.out.println("Valor do INSS do "+ this.getClass().getSimpleName() +": "+ this.getINSS() +"\n");
	}
	
	private String getINSS() {
		DecimalFormat df = new DecimalFormat("#,###.##");
		return df.format( this.getSalario()*((double)11/100) );
	}
	
	public double getSalario() {
		return salario;
	}
	public void setSalario(double salario) {
		this.salario = salario;
	}
	public String getMatricula() {
		return matricula;
	}
	public void setMatricula(String matricula) {
		this.matricula = matricula;
	}

}
