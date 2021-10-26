#include "aeroplane.h"
#include <string>

Aeroplane::Aeroplane(std::string name, int number_of_passengers, int number_of_turbines, int size_in_meters, float autonomy_in_kilometers, float top_speed):
    _name(name), _number_of_passengers(number_of_passengers), _number_of_turbines(number_of_turbines), _size_in_meters(size_in_meters), _autonomy_in_kilometers(autonomy_in_kilometers), _top_speed(top_speed) {}

int Aeroplane::get_number_of_passengers() {
        return this->_number_of_passengers;
}
		
float Aeroplane::get_top_speed() {
        return this->_top_speed;
}
		
int Aeroplane::get_number_of_turbines() {
        return this->_number_of_turbines;
}
		
float Aeroplane::get_autonomy() {
        return this->_autonomy_in_kilometers;
}
		
int Aeroplane::get_size() {
        return this->_size_in_meters;
}

std::string Aeroplane::get_name() {
        return this->_name;
}

int Aeroplane::fly() {
    _current_speed = 300;
    return _current_speed;
}
