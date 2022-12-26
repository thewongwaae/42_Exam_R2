#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main(int argc, char *argv[]) {
	if (argc == 3) {
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		printf("%d", gcd(a, b));
	}
	printf("\n");
	return 0;
}
