#include <unistd.h>

int	ft_slen(char *s) {
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

int main(int argc, char **argv) {
	int len = 0;

	if (argc == 2) {
		len = ft_slen(argv[1]);
		while (argv[1][--len])
			write(1, &argv[1][len], 1);
	}
	write(1, "\n", 1);
	return (0);
}