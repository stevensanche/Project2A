/* Steven Sanchez Jimenez */


#include <stdio.h>
#include <stdlib.h>


int OddComposite() {
	int a;
	int b;
	for (b = 11; b <= 500; b+=2) {
		for (a = 2; a < b; a++) {
			if (b % a == 0) {
				printf("%d is a composite number.\n", b);
				break;

			}
		}
	}
	return 0;
}

int main() {
	OddComposite();
		return 0;
}
