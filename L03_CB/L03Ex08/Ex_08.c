#include <stdio.h>
#include <stdlib.h>
#include <math.h>


unsigned int total_digits(int number) {
	if (number < 0) {
		number *= -1;
	}

	return ((int) (log(number)/log(10))) + 1;
}


unsigned short get_digit(int number, unsigned int position) {
	unsigned int mod_position = pow(10, position);

	return number%mod_position / (mod_position/10);
}


int reverse(int number) {
	unsigned short is_negative = 0;

	if (number < 0) {
		number *= -1;
		is_negative = 1;
	}

	unsigned short digits = total_digits(number);
	int result = 0;
	int i;

	for (i = 1; digits > 0; ++i, --digits) {
		unsigned short single_digit = get_digit(number, i);

		result += (single_digit*((int) pow(10, digits))) / 10;
	}

	if (is_negative) {
		result *= -1;
	}

	return result;
}


int main() {
	int number;
	scanf("%d", &number);
	printf("%d\n", reverse(number));


	return 0;
}
