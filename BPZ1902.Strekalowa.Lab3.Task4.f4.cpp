module;
#include <cmath>

module BPZ1902.Strekalowa.Lab3.Task4:f4;

import :a;

namespace RBPO::Lab3::Task4 {
	double f4(double eps) {
		double res = 0;
		int i = 0;
		while (abs(a(i) - a(i - 1)) >= eps)
			res += a(i++);

		return res;
	}
}