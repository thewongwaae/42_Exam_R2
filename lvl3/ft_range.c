#include <stdlib.h>

int	*ft_range(int start, int end) {
	int size = end - start;
	int *ret;
	int *ptr;

	if (size) {
		ret = (int *) malloc (sizeof(int) * size);
		if (ret) {
			ptr = ret;
			while (start <= end) {
				*ret = start;
				ret++;
				start++;
			}
			return (ret);
		}
	}
	return (NULL);
}
