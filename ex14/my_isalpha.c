#include <stdio.h>

int	my_isalpha(char param_1) {
	if (param_1 > 64 && param_1 < 91 || param_1 > 96 && param_1 < 123)
		return 1;
	else
		return 0;
}

/*int	main() {
	printf("-> %d\n", my_isalpha('a'));
	printf("-> %d\n", my_isalpha(' '));
	printf("-> %d\n", my_isalpha('0'));
	return (0);
}*/
