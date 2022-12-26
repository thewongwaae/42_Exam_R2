unsigned int	lcm(unsigned int a, unsigned int b) {
	int n = 0;
	
	if (!a || !b)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1) {
		if (!(n & a) && !(n % b))
			return (n);
		n++;
	}
}