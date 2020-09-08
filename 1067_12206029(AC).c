#include<stdio.h>

int main(){
    int a;
    
    scanf("%d", &a);
    
    if(a>0){
        printf("plus\n");
        if(a%2==0){
            printf("even");
        }else printf("odd");
    }else {
        printf("minus\n");
        if(a%2==0){
            printf("even");
        }else printf("odd");
    }
    
}
