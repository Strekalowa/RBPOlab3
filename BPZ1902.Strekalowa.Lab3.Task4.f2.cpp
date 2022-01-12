module;
#include <cmath>

module BPZ1902.Strekalowa.Lab3.Task4:f2;

namespace RBPO::Lab3::Task4 {
	double f2(double x) {
		if (x > 3)
			return 1.2 * x * x - 3 * x - 9;
		else
			return 12 / (2 * x * x + 1);
	}
}