int	instr(char c, const char *s) {
	while (*s) {
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *reject) {
	int i = 0;
	
	while (s[i] && instr(s[i], reject))
		i++;
	return (i);
}