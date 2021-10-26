class Aquecedor {
private:
    double _temperatura;
public:
    Aquecedor();
    ~Aquecedor();
    void aquecer();
    void resfriar();
    double get_temperatura();
};
