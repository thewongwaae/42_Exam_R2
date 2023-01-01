#include <unistd.h>

void putnbr(int n) {
	char ch = 0;
	
	if (n > 9)
		putnbr(n / 10);
	ch = (n % 10) + '0';
	write(1, &ch, 1);
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
	int count = 0;
	int num;

	if (argc == 2) {
		num = ft_atoi(argv[1]);
		while (++count < 10) {
			putnbr(count);
			write(1, " x ", 3);
			putnbr(num);
			write(1, " = ", 3);
			putnbr(count * num);
			write(1, "\n", 1);
		}
	} else write(1, "\n", 1);
}