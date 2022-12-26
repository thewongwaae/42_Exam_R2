int	instr(char c, const char *s) {
	while (*s) {
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject) {
	int i = 0;
	
	while (s[i] && !instr(s[i], reject))
		i++;
	return (i);
}

// int main(int argc, char **argv) {
// 	(void) argc;

// 	printf("%i\n", (int) ft_strcspn(argv[1], argv[2]));
// 	printf("%i\n", (int) strcspn(argv[1], argv[2]));
// }