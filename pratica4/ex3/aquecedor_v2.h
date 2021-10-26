class Aquecedor {
private:
    double _temperatura;
    double _temperatura_min, _temperatura_max;
    double _fator_incremento;
public:
    Aquecedor();
    ~Aquecedor();
    void set_temp(double temperatura);
    void set_fator(double fator);
    void set_temp_fator(double temperatura, double fator);
    void aquecer();
    void resfriar();
    double get_temperatura();
};
