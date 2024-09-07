class produtos{
	int codigo;
	String nome;
	int qualidade;
	private double preco;

	void seta_preco(double p){
        	preco = p;
	}

	double retona_preco(){
        	return preco;
	}
}