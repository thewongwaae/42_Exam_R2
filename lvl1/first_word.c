#include <unistd.h>

int main(int argc, char **argv) {
	int i = 0;

	if (argc == 2) {
		if (argv[1]) {
			while (argv[1][i] >= 9 && argv[1][i] <= 13)
				i++;
			while (!(argv[1][i] >= 9 && argv[1][i] <= 13))
				write(1, argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}