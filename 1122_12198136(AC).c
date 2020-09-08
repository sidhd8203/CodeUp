#include<stdio.h>

int main(){
    int s, m = 0;
    
    scanf("%d",&s);
    m = s/60;
    s = s%60;
    printf("%d %d",m, s);
    
    
}
