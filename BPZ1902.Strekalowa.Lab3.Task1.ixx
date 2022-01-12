module;
#include <cmath>

export module BPZ1902.Strekalowa.Lab3.Task1;

namespace RBPO::Lab3::Task1 {
	export double f1(double x) {
		return (4 - x * x) / 2;
	}

	export double f2(double x) {
		return x > 3 ? 1.2 * x * x - 3 * x - 9 : 12 / (2 * x * x + 1);
	}

	export double a(unsigned int i) {
		return pow(-1, i)* (i + 1) / (pow(i, 3) + 2);
	}

	export double f3(unsigned int n) {
		double res = 0;
		for (unsigned int i = 0; i <= n; i++)
			res += a(i);

		return res;
	}

	export double f4(double eps) {
		double res = 0;
		for (unsigned int i = 0; i < _UI32_MAX; i++) {
			if (abs(a(i) - a(i - 1)) < eps)
				return res;
			res += a(i);
		}

		return NULL;
	}
}