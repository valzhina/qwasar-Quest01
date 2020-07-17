#include <stdio.h>

int	my_isspace(char param_1) {
	if (param_1 == '\t' || param_1 == '\0' || param_1 == '\v' || param_1 == '\f' || param_1 == '\r' || param_1 == ' ')
		return (1);
	else
		return (0);
}

/*int	main() {
	printf("-> %d\n", my_isspace('a'));
	printf("-> %d\n", my_isspace('\t'));
	printf("-> %d\n", my_isspace('\0')); 
	printf("-> %d\n", my_isspace(' '));
	return (0);
}*/

