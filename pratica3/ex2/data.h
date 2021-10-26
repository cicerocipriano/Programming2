struct Data{
  // Dados
  int _dia;
  int _mes;
  int _ano;

  // Construtor
  Data();
  // Destrutor
  ~Data();
  // Ler Data
  void ler_data(int dia, int mes, int ano);
  // Imprimir em formato de numeros separados por barra
  void imprimir_numeros();
  // Imprimir a data por extenso
  void imprimir_extenso();
  // determinar os segundos desde a data inicial ate a data lida
  int GetDataEmSegundos(Data a);
};
