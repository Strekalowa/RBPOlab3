module;
#include <cmath>

module BPZ1902.Strekalowa.Lab3.Task3;

namespace RBPO::Lab3::Task3 {
	double f3(unsigned int n) {
		double res = 0;
		unsigned int i = 0;
		do
			res += a(i++);
		while (i <= n);

		return res;
	}
}