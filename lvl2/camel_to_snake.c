#include <unistd.h>

int main(int argc, char **argv) {
	int i = -1;

	if (argc == 2) {
		while (argv[1][++i]) {
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') {
				argv[1][i] += 32; // convert to small
				write(1, "_", 1); // write _
			}
			write(1, &argv[1][i], 1); // output small lettered char
		}
	}
	write(1, "\n", 1);
	return (0);
}