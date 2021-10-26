class Rectangle {
private:
    float _length, _width;
public:
    float _perimeter, _area;
    Rectangle();
    ~Rectangle();
    void perimeter();
    void area();
    void set_length();
    void set_width();
    float get_length();
    float get_width();
};
