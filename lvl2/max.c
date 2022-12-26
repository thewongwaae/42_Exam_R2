int	max(int *tab, unsigned int len) {
	int max = 0;

	while (len != 0) {
		if (tab[len - 1] > max)
			max = tab[len - 1];
		len--;
	}
	return (max);
}