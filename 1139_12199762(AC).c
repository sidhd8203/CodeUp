﻿/*두 가지의 참(1) 또는 거짓(0)이 입력될 때, 모두 참일 때는 1이, 그렇지 않으면 0이 출력되는 프로그램을 작성해보자.

참고)

논리연산자 && 는 주어진 2개의 논리값이 모두 참(1) 일 때에 1(참)으로 계산하고,이외의 경우에는 0(거짓) 으로 계산한다.

이러한 논리 연산을 AND 연산이라고도 부르고, &&로 표시한다.

입력
두 정수가 입력된다.

출력
두 정수의 값이 모두 참(1) 이면 참(1), 하나라도 거짓(0)이면 거짓(0)을 출력한다.

입력 예시   
1 0

출력 예시
0*/

#include<stdio.h>

int main(){
    int a,b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d", a&&b);
    
}
