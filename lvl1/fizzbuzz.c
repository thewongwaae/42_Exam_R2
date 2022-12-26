#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 1;
	(void) argv;

	if (argc == 1) {
		while (i < 101) {
			if (i % 3 == 0)
				write(1, "fizz", 4);
			if (i % 5 == 0)
				write(1, "buzz", 4);
			i++;
		}
	}
	return (0);
}