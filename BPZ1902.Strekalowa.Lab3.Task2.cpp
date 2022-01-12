module;
#include <cmath>

module BPZ1902.Strekalowa.Lab3.Task2;

namespace RBPO::Lab3::Task2 {
	double f1(double x) {
		return (4 - x * x) / 2;
	}

	double f2(double x) {
		if (x > 3)
			return  1.2 * x * x - 3 * x - 9;
		else
			return 12 / (2 * x * x + 1);
	}

	double a(unsigned int i) {
		return pow(-1, i) * (i + 1) / (pow(i, 3) + 2);
	}

	double f3(unsigned int n) {
		double res = 0;
		unsigned int i = 0;
		while (i <= n)
			res += a(i++);

		return res;
	}

	double f4(double eps) {
		double res = 0;
		int i = 0;
		while (abs(a(i) - a(i - 1)) >= eps)
			res += a(i++);

		return res;
	}
}