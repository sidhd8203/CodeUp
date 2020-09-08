#include<stdio.h>

int main(){
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d%d",a,b);
    
    if(c<10){
        printf("0");
        printf("%d", c);
    }else printf("%d", c);
    
    
}

