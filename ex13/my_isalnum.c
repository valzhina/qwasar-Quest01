#include <stdio.h>

int	my_isalnum(char param_1) {
	if (param_1 > 47 && param_1 < 58 || param_1 > 64 && param_1 < 91 || param_1 > 96 && param_1 < 123)
		return (1);
	else
		return (0);
}

int	main() {
	printf("-> %d\n", my_isalnum('a'));
	printf("-> %d\n", my_isalnum(']'));
	printf("-> %d\n", my_isalnum('0'));
	return (0);
}
