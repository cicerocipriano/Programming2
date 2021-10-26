#ifndef AEROPLANE_H_
#define AEROPLANE_H_

#include <string>

class Aeroplane {
        public:
                Aeroplane(std::string name, int number_of_passengers, int number_of_turbines, int size_in_meters, float autonomy_in_kilometers, float top_speed);
                virtual int fly();
                int get_number_of_passengers();
                float get_top_speed();
                int get_number_of_turbines();
                float get_autonomy();
                int get_size();
                std::string get_name();
        protected:
                int _number_of_turbines;
                int _size_in_meters;
                float _autonomy_in_kilometers;
                float _top_speed;
                int _number_of_passengers;
                int _current_speed;
                std::string _name;
};

#endif /* AEROPLANE_H_ */
