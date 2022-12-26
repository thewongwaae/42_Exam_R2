int	is_power_of_2(unsigned int n) {
	float nb = n;

	while (nb) {
		nb /= 2;
		if (nb == 1)
			return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv) {
// 	(void) argc;

// 	printf("%i\n", is_power_of_2(atoi(argv[1])));
// 	return (0);
// }