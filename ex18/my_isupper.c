#include <stdio.h>

int	my_isupper(char param_1) {
	if (param_1 > 64 && param_1 < 91)
		return (1);
	else
		return (0);
}
/*
int	main() {

	int i = 65;
	printf("-> %d\n", my_isupper('a'));
	printf("-> %d\n", my_isupper('A'));
	printf("-> %d\n", my_isupper('0'));
	while (i < 90){
		printf("-> %d", my_isupper(i));
		i++;
	}
	printf("\n");
	return (0);
}*/
