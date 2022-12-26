#include <unistd.h>

// int	slen(char *s) {
// 	int len = 0;

// 	while (s[len])
// 		len++;
// 	return (len);
// }

// int	instr(char c, const char *s, int len) {
// 	while (*s && len--) {
// 		if (*s == c)
// 			return (1);
// 		s++;
// 	}
// 	return (0);
// }

// int main(int argc, char **argv) {
// 	int i = 0;
// 	int j = 0;
	
// 	if (argc == 3) {
// 		while (argv[2][j]) {
// 			if (argv[2][j] == argv[1][i] && !instr(argv[1][i] ,argv[1], i) && instr(argv[2][j], argv[1], slen(argv[2]))) {
// 				write(1, &argv[2][j], 1);
// 				j++;
// 				i++;
// 			} else j++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }

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
			if (!instr(argv[1], argv[1][i], i) && instr(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
	write(1, "\n", 1);
	return (0);
}