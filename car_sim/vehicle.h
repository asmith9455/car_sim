#pragma once

class vehicle
{
	using input_signal_t = double;
	using output_signal_t = double;

	input_signal_t m_throttle = 0, m_braking = 0, m_steering = 0;
	output_signal_t m_position = 0, m_velocity = 0, m_acceleration = 0;

public:

	enum input {
		throttle,
		braking,
		steering
	};

	enum output {
		position,
		velocity,
		acceleration
	};

	vehicle();

	//member function template for setting an input and associated specializations - this allows avoidance of if statements
	template<input>	void set(vehicle::input_signal_t s) {}
	
	template<> void set<input::throttle>(vehicle::input_signal_t throttle);
	template<> void set<input::braking>(vehicle::input_signal_t braking); 
	template<> void set<input::steering>(vehicle::input_signal_t steering);

	template<output> output_signal_t get() {}

	template<> output_signal_t get<output::position>();
	template<> output_signal_t get<output::velocity>();
	template<> output_signal_t get<output::acceleration>();

};

#include "vehicle.tpp"


