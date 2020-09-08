#include<stdio.h>

int main() {
	int a, b, c, sum;

	scanf("%d %d %d", &a, &b, &c);

	sum = (a + b + c)%1000; // ex) 1234 % 1000 = 234 
	sum = sum / 100; //  234/100 = 2
	if (sum%2 == 0) {
		printf("대박");
	}
	else printf("그럭저럭");


}
