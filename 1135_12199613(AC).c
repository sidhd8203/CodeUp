﻿/*두 정수(a, b)를 입력받아 a가 b보다 크거나 같으면(이상) 1, a가 b보다 작으면(미만) 0을 출력하는 프로그램을 작성해보자.

참고)

어떤 값을 비교하기 위해 관계연산자를 사용할 수 있다.

관계연산자는 주어진 2개 값을 비교하고, 그 결과가 참인 경우, 참(true)을 나타내는 정수값 1로 계산되고 거짓인 경우, 거짓(false)를 나타내는 정수값 0으로 계산된다.

관계연산자도 일반적인 사칙연산자처럼 주어진 두 수를 이용해 계산을 수행하고 그 결과를 1(참), 또는 0(거짓)으로 계산해 주는 연산자이다.

관계연산자의 종류는 다음과 같다. >, <, >=, <=, ==(같다), !=(다르다)

입력
두 정수 a, b가 공백을 두고 입력된다.(a,b는 int형 범위)

출력
a가 b보다 크거나 같을 경우 1, 그렇지 않은 경우 0을 출력한다.

입력 예시   
2 3*/

#include<stdio.h>
int main(){
    int a, b;
    
    scanf("%d %d",&a, &b);
    if(a>=b){
        printf("1");
    }else
        printf("0");
    
}
