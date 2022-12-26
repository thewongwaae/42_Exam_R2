#include <unistd.h>

int	slen(char *s) {
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

int main(int argc, char **argv) {
	int i = 0;
	int j = 0;

	if (argc == 3) {
		while (argv[2][j]) {
			if (argv[1][i] == argv[2][j]) {
				i++;
				j++;
			} else j++;
			if (!argv[1][i]) {
				write(1, argv[1], slen(argv[1]));
				break;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}