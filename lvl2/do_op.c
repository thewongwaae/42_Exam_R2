#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int n1 = 0;
	int n2 = 0;
	int out = 0;
	
	if (argc == 4) {
		if (argv[2][0] == '+')
			printf("%i", (atoi(argv[1]) + atoi(argv[3])));
		else if (argv[2][0] == '-')
			printf("%i", (atoi(argv[1]) - atoi(argv[3])));
		else if (argv[2][0] == '*')
			printf("%i", (atoi(argv[1]) * atoi(argv[3])));
		else if (argv[2][0] == '/')
			printf("%i", (atoi(argv[1]) / atoi(argv[3])));
		else if (argv[2][0] == '%')
			printf("%i", (atoi(argv[1]) % atoi(argv[3])));
	}
	printf("\n");
	return (0);
}