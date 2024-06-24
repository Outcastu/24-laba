#include "Header.h"
int Faktorial_My(int n) {
	if (n == 0) {
		return 1;
	}
	long res = Faktorial_My(n - 1) * n;
	return res;
}