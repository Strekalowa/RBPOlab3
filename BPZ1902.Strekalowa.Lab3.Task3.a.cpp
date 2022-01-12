module;
#include <cmath>

module BPZ1902.Strekalowa.Lab3.Task3;

namespace RBPO::Lab3::Task3 {
	double a(unsigned int i) {
		return  pow(-1, i) * (i + 1) / (pow(i, 3) + 2);
	}
}