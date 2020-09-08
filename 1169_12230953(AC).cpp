#include<stdio.h>

int main() {

	int a, b;

	scanf("%d", &a); // 18


	a = 2013 - a; // 2013 - 18 = 1995
	if (a / 1000 == 1) {
		a = (a % 100); // 1995 / 100  950 + 5
		b = 1;
		printf("%d %d", a, b);
	}
	else if (a / 1000 == 2) {
		a = (a % 100); // 1995 / 100  90 + 5
		b = 3;
		printf("%d %d", a, b);
	}

}
