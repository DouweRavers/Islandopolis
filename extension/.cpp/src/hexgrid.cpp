#include "hexgrid.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void HexGrid::_bind_methods() {
}

HexGrid::HexGrid() {
	// Initialize any variables here.
	time_passed = 0.0;
}

HexGrid::~HexGrid() {
	// Add your cleanup here.
}

void HexGrid::_process(double delta) {
	time_passed += delta;
	
	set_position(10 * Vector3(sin(time_passed * 2.0), cos(time_passed * 2.0), sin(time_passed * 2.0)));
}