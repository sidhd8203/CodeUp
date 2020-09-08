/*7의 배수일 경우 multiple를 출력하고, 7의 배수가 아니면 not multiple을 출력하시오.*/


#include<stdio.h>

int main(){
    int a;
    
    scanf("%d", &a);
    
    if(a%7==0){
        printf("multiple");
    }else printf("not multiple");
    
    
}
