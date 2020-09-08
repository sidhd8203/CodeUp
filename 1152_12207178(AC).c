/*10보다 작은 정수가 입력되면 small 을 출력, 그 이상의 수가 입력되면 big 을 출력하시오.*/

#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    
    if(a>=10){
        printf("big");
    }else{
        printf("small");
    }
    
    
}
