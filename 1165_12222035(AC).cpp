#include<stdio.h>

int main() {

	int time,time1, c1;
	scanf("%d %d", &time, &c1); // 시간과 현재 득점 점수

	if (time != 90) { // 90이 아니라면
		//time1 = 90 - time % 5;


		time = (89 - time) / 5; // ex 90 - 60 = 30 / 5 = 6점 득점 할 수 있음 time에 6이 들어감


		c1 = c1 + 1;
		c1 = c1 + time; // 득점 + 6점
		printf("%d", c1);
		}
		else  printf("%d",c1);


}
