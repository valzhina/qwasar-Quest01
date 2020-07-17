#include <stdio.h>
#include <unistd.h>

void    my_putchar(char c) {
    write(1, &c, 1);
}

void    my_print_alphabet() {

    char letter = 'a';

 	while (letter >= 97 && letter <= 122) {
	    my_putchar(letter);
        letter++;
     }
     my_putchar('\n');
}

/*int main(){

    my_print_alphabet();
    //my_putchar('\n');
	return (0);
}*/




/* void my_print_alphabet(char param_1) {
    printf("%c", param_1);
} 

int	main() {

    char letter = 97;
 	while (letter >= 97 && letter <= 122) {
	    my_print_alphabet(letter);
        letter++;
     }
    printf("\n");
	return (0);
}
*/