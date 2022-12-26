int	instr(char c, const char *s) {
	while (*s) {
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2) {
	while (*s1 && !instr(*s1, s2))
		s1++;
	return (s1);
}