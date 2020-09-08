#include<stdio.h>

int main(){
    int a;
    reload:
        scanf("%d",&a);
        if(a==0) goto end;
        printf("%d\n", a);
        if(a!=0) goto reload;
        end:
        return 0;
    
}
