package avaliacao4POO2;

public class Diretor extends Empregado implements ApresentacaoDados {
	
	private String nomeDiretoria;

	public Diretor(String nome, int idade, String sexo, double salario, String matricula, String nomeDiretoria) {
		super(nome, idade, sexo, salario, matricula);
		this.nomeDiretoria = nomeDiretoria;
	}
	
	@Override
	public void apresentarDados() {
		System.out.println("nome: "+this.getNome()+"\nidade: "+this.getIdade()+
				"\nmatrícula: "+this.getMatricula()+"\nnome da diretoria: "+this.getNomeDiretoria()+
				"\n");
	}

	public String getNomeDiretoria() {
		return nomeDiretoria;
	}

	public void setNomeDiretoria(String nomeDiretoria) {
		this.nomeDiretoria = nomeDiretoria;
	}
	
}
