#include <unistd.h>

int	instr(char *s, char c, int len)
{
	int	i = 0;

	while (s[i] && (i < len || len == -1))
		if (s[i++] == c)
			return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i = -1;

	if (argc == 3)
		while (argv[1][++i])	
			if (!instr(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
		i = -1;
		while (argv[2][++i])
			if (!instr(argv[1], argv[2][i], -1) && !instr(argv[2], argv[2][i], i))
				write(1, &argv[2][i], 1);
	write(1, "\n", 1);
	return (0);
}