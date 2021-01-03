package avaliacao4POO2;

public class Main {

	public static void main(String[] args) {
		apresentarTipoPessoa("Cliente");
		Cliente cliente = new Cliente("Márcio Costa Filho", 21, "masculino", 5022, 1999);
		cliente.apresentarDados();

		apresentarTipoPessoa("Diretor");
		Diretor diretor = new Diretor("Valter da Silva Pinheiro", 38, "masculino", 8500, "43338-5", "Diretoria de Tecnologia da Informação");
		diretor.apresentarDados();
		diretor.valorINSS();
		

		apresentarTipoPessoa("Gerente");
		Gerente gerente = new Gerente("Valter da Silva Pinheiro", 38, "masculino", 5500, "46878-8", 15256, 6);
		gerente.apresentarDados();
		gerente.valorINSS();
		
		
	}
	
	public static void apresentarTipoPessoa(String pessoa) {
		System.out.println("\n"+pessoa);
	}

}
