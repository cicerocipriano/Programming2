struct Aluno{
    // Dados
    char *_nome;
    int _matricula;
    int *_notas;
    double _media_notas;

    // Construtor
    Aluno();
    // Destrutor
    ~Aluno();
    // Le o nome do aluno
    void get_nome_aluno();
    // Le o numero de matricula
    void get_matricula();
    // adiciona nota
    void adicionarNota();
    // Calcula a media do aluno
    void calculaMediaAluno(int *notas);
    // Imprime as informacoes do aluno
    void imprimeInformacoesAluno();
};
