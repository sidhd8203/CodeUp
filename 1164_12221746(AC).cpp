#include<stdio.h>

int main() {
	int t = 170;
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if ((a > t) && (b > t) && (c > t)) {
		printf("PASS");
	}
	else printf("CRASH");




}
