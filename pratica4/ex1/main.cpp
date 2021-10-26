#include "rectangle.h"
#include <iostream>

int main(int argc, char **argv) {

    Rectangle a;

    std::cout << "Length: " << a.get_length() << std::endl;
    std::cout << "Width: " << a.get_width() << std::endl;

    a.set_length();
    a.set_width();

    std::cout << "Length: " << a.get_length() << std::endl;
    std::cout << "Width: " << a.get_width() << std::endl;

    a.perimeter();
    a.area();

    std::cout << "Perimeter: " << a._perimeter << std::endl;
    std::cout << "Area: " << a._area << std::endl;

    return 0;
}
