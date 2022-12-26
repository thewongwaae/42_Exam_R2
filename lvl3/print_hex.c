#include <unistd.h>

int ft_atoi(char *num) {
	int n = 0;

	while (*num)
		n = n * 10 + *num++ - '0';
	return (n);
}

void print_hex(int n) {
	if (n >= 16)
		print_hex(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int main(int argc, char **argv) {
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}