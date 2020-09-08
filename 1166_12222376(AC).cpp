#include<stdio.h>

int main() {
	int year;

	scanf("%d", &year); // 2000
	if (((year % 4 == 0) && (year % 100 != 0)) || year%400 == 0) {
		printf("yes");
	}else printf("no");
	

}
