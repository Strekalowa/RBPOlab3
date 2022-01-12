module;
#include <cmath>

module BPZ1902.Strekalowa.Lab3.Task4:f3;

import :a;

namespace RBPO::Lab3::Task4 {
	double f3(unsigned int n) {
		double res = 0;
		unsigned int i = 0;
		while (i <= n)
			res += a(i++);

		return res;
	}
}