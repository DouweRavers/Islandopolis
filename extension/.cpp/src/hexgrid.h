#ifndef HEXGRID_H
#define HEXGRID_H

#include <godot_cpp/classes/grid_map.hpp>

namespace godot {

class HexGrid : public GridMap {
	GDCLASS(HexGrid, GridMap)

private:
	double time_passed;

protected:
	static void _bind_methods();

public:
	HexGrid();
	~HexGrid();

	void _process(double delta);
};

}

#endif