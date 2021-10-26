#include "jetplane.h"
#include <iostream>
#include <string>

Jet_Plane::Jet_Plane(std::string name, int number_of_passengers, int number_of_turbines, int size_in_meters, float autonomy_in_kilometers, float top_speed, std::string company):
    Aeroplane(name,number_of_passengers,number_of_turbines,size_in_meters,autonomy_in_kilometers,top_speed), _company(company) {}

void Jet_Plane::stop_and_get_passengers(int number_of_extra_passengers) {
        _number_of_passengers += number_of_extra_passengers;
}

std::string Jet_Plane::get_company() {
        return this->_company;
}

void Jet_Plane::fly_with_max_capacity() {
        _current_speed = _top_speed/3;
}

int Jet_Plane::fly() {
	_current_speed = _number_of_turbines*(300+_size_in_meters)*(_number_of_passengers/500);
        return _current_speed;
}
