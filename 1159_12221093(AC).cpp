﻿#include<stdio.h>

int main() {
	
	int a;
	scanf("%d", &a);

	if ((a >= 50 && a <= 70) || (a % 6 == 0)) {

		printf("win");
	}else printf("lose");

}
