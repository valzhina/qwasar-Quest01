#include <stdio.h>

int	my_islower(char param_1) {
	if (param_1 > 96 && param_1 < 123)
		return (1);
	else
		return (0);
}
/*
int	main() {

	int i = 97;
	printf("-> %d\n", my_islower('a'));
	printf("-> %d\n", my_islower(' '));
	printf("-> %d\n", my_islower('0'));
	while (i < 124){
		printf("-> %d", my_islower(i));
		i++;
	}
	printf("\n");
	return (0);
}*/

