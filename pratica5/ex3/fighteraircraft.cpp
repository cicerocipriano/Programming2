#include "fighteraircraft.h"
#include <iostream>
#include <string>

Fighter_Aircraft::Fighter_Aircraft(std::string name, int number_of_passengers, int number_of_turbines, int size_in_meters, float autonomy_in_kilometers, float top_speed, int number_of_missiles):
    Aeroplane(name,number_of_passengers,number_of_turbines,size_in_meters,autonomy_in_kilometers,top_speed), _number_of_missiles(number_of_missiles) {}

int Fighter_Aircraft::get_number_of_missiles() {
        return this->_number_of_missiles;
}

void Fighter_Aircraft::shoot(int number_of_missiles_to_fire) {
        _number_of_missiles -= number_of_missiles_to_fire;
}


void Fighter_Aircraft::fly_at_max_speed() {
        _current_speed = _top_speed;
}


int Fighter_Aircraft::fly() {
        _current_speed = _number_of_turbines*700;
        if (_current_speed > _top_speed) {
                _current_speed = _top_speed;
	}

        return _current_speed;
}



