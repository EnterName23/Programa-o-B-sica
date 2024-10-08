
public class ClassePrincipal {

	public static void main(String[] args) {
		Professor1 Prof1 = new Professor1();

		Prof1.Nome = "João Paulo";

		Prof1.Idade = 25;

		Prof1.Prontuário = "SP3132424";

		Prof1.Graduação = "Ensino Superior Completo";

		Prof1.Instituição = "IFSP";
	
		Prof1.Matéria = "Matemática";
		
		Prof1.definirIdade(26);
		Prof1.exibirInformacoes();
		
	
	
	Aluno1 Alun1 = new Aluno1();
	
		Alun1.Nome = "Paulo João";
		
		Alun1.Idade = 17;
		
		Alun1.Prontuário = "SP3137624";

		Alun1.Graduação = "Ensino Médio Completo";

		Alun1.Instituição = "IFSP";
	
		Alun1.Curso = "Sistema de Informação";
		
		Alun1.definirIdade(26);
		Alun1.exibirInformacoes();
		
		
	Funcionario1 Funcio1 = new Funcionario1();
		
		Funcio1.Nome = "Pedro João";
		
		Funcio1.Idade = 34;
		
		Funcio1.Prontuário = "SP5437624";

		Funcio1.Graduação = "Ensino Superior Completo";

		Funcio1.Instituição = "IFSP";
	
		Funcio1.Função = "Admnistrador";
		
		Funcio1.definirIdade(26);
		Funcio1.exibirInformacoes();

	}

}
