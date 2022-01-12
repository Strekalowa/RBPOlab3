module;
#include <cmath>

module BPZ1902.Strekalowa.Lab3.Task3;

namespace RBPO::Lab3::Task3 {
	double f4(double eps) {
		double res = 0;
		unsigned int i = 0;
		do
			res += a(i++);
		while (abs(a(i) - a(i - 1)) > eps);

		return res;
	}
}