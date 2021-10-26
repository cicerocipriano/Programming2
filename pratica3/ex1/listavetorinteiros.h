#define TAMANHO_INICIAL 5 // Mudei para nao imprimir 100 digitos toda vez

struct ListaVetorInteiros{
    // Dados
    int *_elementos;
    int _num_elementos_inseridos;
    int _capacidade;

    // Construtor
    ListaVetorInteiros();
    // Destrutor
    ~ListaVetorInteiros();
    // Insere um inteiro na lista
    void inserir_elemento(int elemento);
    // Remove o primeiro elemento
    void remover_primeiro();
    // Remove o ultimo elemento
    void remover_ultimo();
    // Inverte a lista
    void inverte();
    // Imprime a lista
    void imprimir();
};
