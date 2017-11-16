//set the throttle from 0 (closed) to 1 (open)
template<> void vehicle::set<vehicle::input::throttle>(vehicle::input_signal_t throttle) {
		m_throttle = throttle;
	}

//set the braking from 0 (off) to 1 (full)
template<> void vehicle::set<vehicle::input::braking>(vehicle::input_signal_t braking) {
		m_braking = braking;
	}

//set the steering from -1 (full left) to +1 (full right)
template<> void vehicle::set<vehicle::input::steering>(vehicle::input_signal_t steering) {
		m_steering = steering;
	}


//get position
template<> vehicle::output_signal_t vehicle::get<vehicle::output::position>() {
		return m_position;
	}

//get velocity
template<> vehicle::output_signal_t vehicle::get<vehicle::output::velocity>() {
		return m_velocity;
	}

//set the steering from -1 (full left) to +1 (full right)
template<> vehicle::output_signal_t vehicle::get<vehicle::output::acceleration>() {
		return m_acceleration;
	}