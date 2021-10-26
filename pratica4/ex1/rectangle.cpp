#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle() {
    _length = 1.0;
    _width = 1.0;
}

void Rectangle::perimeter() {
    _perimeter = _length*2+_width*2;
}

void Rectangle::area() {
    _area = _length*_width;
}

void Rectangle::set_length() {
    std::cout << "Write the rectangle's length: ";
    std::cin >> _length;
    while (_length <= 0.0 || _length >= 20.0) {
        std::cout << "The length must be between 0.0 and 20.0. Try again: ";
        std::cin >> _length;
    }
}

void Rectangle::set_width() {
    std::cout << "Write the rectangle's width: ";
    std::cin >> _width;
    while (_width <= 0.0 || _width >= 20.0) {
        std::cout << "The width must be between 0.0 and 20.0. Try again: ";
        std::cin >> _width;
    }
}

float Rectangle::get_length() {
    return _length;
}

float Rectangle::get_width() {
    return _width;
}

Rectangle::~Rectangle() {}
