/*세 개의 직선이 있다.

숫자의 의미는 직선의 길이를 말한다.

이 직선으로 삼각형을 만들 수 있는지 판단하는 프로그램을 작성하시오.

삼각형의 성립 조건) 2155 2500 1223

a, b, c 가 변의 길이이고 c가 제일 긴 길이라고 한다면

c < a + b 이면 삼각형이 성립됨.*/

#include<stdio.h>

int main(){
    int a,b,c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if((c>=a) && (c>=b)){
        if(c<a+b){
        printf("yes");}
        else printf("no");
    }else if((b>=c) && (b>=a)){
        if(b<a+c){
        printf("yes");}
        else printf("no");
    }else if((a>=b) & (a>=c)){
        if(a<b+c){
        printf("yes");}
        else printf("no");
    }else printf("no"); 
    
    
    
    
    
}
