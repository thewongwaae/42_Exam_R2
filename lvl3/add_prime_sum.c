int	is_prime(int n) {
    if (n < 2) return (0);

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return (0);
    return (1);
}

int	ft_atoi(const char *str) {
	int num = 0;
	int sign = 1;
	
	if (!str)
		return (0);
	while (*str >= 9 && *str <= 13)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -sign;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + *str++ - 48;
	return (num * sign);
}

int main(int argc, char **argv) {
	int n;
	int sum = 0;
	
	if (argc == 2) {
		n = ft_atoi(argv[1]);
		if (n <= 0) {
			write(1, "0\n", 2);
			return (0);
		}
		for (int i = 2; i <= n; i++)
			if (is_prime(i))
				sum += i;
	}
	write(1, &sum, 2);
	write(1, "\n", 1);
	return (0);
}