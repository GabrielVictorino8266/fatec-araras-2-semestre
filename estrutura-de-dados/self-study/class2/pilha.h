//pilha = stack
typedef int TipoItem; // vai atribuir o tipo dentro da classe quando ivocarmos TipoItem
const int max_itens = 100; // tamanho máximo de elementos da pilha

class pilha{
    private:
    int tamanho;
    TipoItem* estrutura; // vetor

    public: 

    pilha(); // funcao construtora (mesmo nome da classe)
    ~pilha(); // funcao destrutora
    bool estacheia(); // verifica se a pillha está cheia
    bool estavazia(); // verifica e a pilha esta vazia
    void inserir(TipoItem item); // push
    TipoItem remover(); // remover
    void imprimir(); // print
    int qualtamanho(); // lenght
};