#include <unistd.h>

int main(int argc, char **argv) {
	int i = -1;
	
	if (argc == 2) {
		while (argv[1][++i]) {
			if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				argv[1][i] -= 25;
			else
				argv[1][i] += 1;
			write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}