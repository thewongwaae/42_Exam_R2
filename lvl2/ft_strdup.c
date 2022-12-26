int	ft_slen(const char *s) {
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src) {
	int i = -1;
	char *dup = (char *) malloc (sizeof(char) * (ft_slen(src) + 1));

	while (src[++i])
		dup[i] = src[i];
	dup[i] = '\0';
	return (dup);
}