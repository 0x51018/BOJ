#include <stdio.h>

int main() {
	int a = 1, b = 1, c = 1;
	scanf("%d%d%d", &a, &b, &c);
	while (a != 0 || b != 0 || c != 0) {
		if (c * c == a * a + b * b || b * b == a * a + c * c || a * a == b * b + c * c) printf("right\n");
		else printf("wrong\n");
		scanf("%d%d%d", &a, &b, &c);
	}
	return 0;
}