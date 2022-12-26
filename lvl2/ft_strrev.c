int	slen(char *s) {
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

char	*ft_strrev(char *str) {
	int len = 0;
	int halflen = 0;
	int i = -1;
	char ch;

	if (!str)
		return (0);
	len = slen(str);
	halflen = len / 2;
	while (halflen--) {
		ch = str[++i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = ch;
	}
	return (str);
}

// #include <stdio.h>

// int main(int argc, char **argv) {
// 	(void) argv;

// 	printf("%s\n", ft_strrev(argv[1]));
// 	return (0);
// }