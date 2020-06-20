#include "stdafx.h"
#include "w1.h"
#include "math.h"

int factorial(int n) {
	if (n == 0 || n == 1)
		return 1;
	else 
		return n*factorial(n - 1);
}

float FAC::convert(float deg) {
	return deg/ atan(1.0);
}
