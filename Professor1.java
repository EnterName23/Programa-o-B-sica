public class Professor1 {
	public String Nome;
	public String Prontuário;
	public String Instituição;
	public String Graduação;
	public int Idade;
	public String Matéria;

	public void exibirInformacoes() {
		System.out.println("Professor:");
		System.out.println("Nome: " + Nome);
		System.out.println("Idade: " + Idade);
		System.out.println("Prontuário: " + Prontuário);
		System.out.println( "Instituição: " + Instituição);
		System.out.println("Graduação: " + Graduação);
		System.out.println("Graduação: " + Matéria);
		
	}
	public void definirIdade(int NovaIdade){

		Idade = NovaIdade;
		System.out.println("Idade atualizada para: " + Idade);
	}
	}
