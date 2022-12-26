#include <unistd.h>

void rstr_capitalizer(char *s) {
	while (*s) {
		if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		if (*s >= 'a' && *s <= 'z' && (*(s + 1) == ' ' || *(s + 1) == '\n' || *(s + 1) == '\0'))
			*s -= 32;
		write(1, s++, 1);
	}
}

int main(int argc, char **argv) {
	int i = 1;
	
	if (argc >= 2) {
		while (i < argc) {
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	} else write(1, "\n", 1);
	return (0);
}