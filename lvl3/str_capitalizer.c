#include <unistd.h>

void str_capitalizer(char *s) {
	int caps = 1;

	while (*s) {
		if (*s == ' ' || *s == '\n')
			caps = 1;
		else if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		if (!((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')))
			caps = 1;
		if (caps == 1 && (*s >= 'a' && *s <= 'z')) {
			*s += 32;
			caps = 0;
		}
		write(1, s++, 1);
	}
}

int main(int argc, char **argv) {
	int i = 1;

	if (argc >= 2) {
		while (argv[i]) {
			str_capitalizer(argv[i++]);
			write(1, "\n", 1);
		}
	}
	return (0);
}