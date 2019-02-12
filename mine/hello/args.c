#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("argument count = %d\n", argc);

	char **p0 = &argv[0];
	for (int i = 0; i < argc; i++) {
		printf("   %d: %s\n", i, argv[i]);
		printf("  p%d: %s\n", i, *(p0 + i));
	}

	return 0;
}
