#include <stdio.h>

int detonation_in(int seconds_left) {
	printf("detonation in... %d secondes.\n", seconds_left);
	return (0);
}

int main() {
	
	int timer = 10;

  while (timer > 0) {
	detonation_in(timer);
	timer--;
  }
  return 0;
}
