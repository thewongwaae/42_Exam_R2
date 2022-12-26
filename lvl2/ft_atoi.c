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