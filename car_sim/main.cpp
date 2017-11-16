#include <iostream>
#include "vehicle.h"

int main(){


	vehicle v;
	v.set<vehicle::input::braking>(2.0);
	std::cout << v.get<vehicle::output::position>() << std::endl;
	v.set<vehicle::input::throttle>(3.0);

	return EXIT_SUCCESS;
} 