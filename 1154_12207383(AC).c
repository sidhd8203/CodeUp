/*정수 두개가 입력으로 들어오면 큰수 - 작은수의 값을 출력하시오.*/

#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d",&a, &b);
    
    if(a>b){
        printf("%d", a-b);
        
    }else printf("%d", b-a);
    
}
