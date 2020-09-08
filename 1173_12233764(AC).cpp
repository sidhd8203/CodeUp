#include<stdio.h>

int main(){
    
    int h, m;
    scanf("%d %d", &h, &m);
    
    if(m-30>=0){
        printf("%d %d", h, m-30);
    }else {
        h = h-1;
        if(h<0){
            h = 23;
            printf("%d %d",h, m+30);
        }else printf("%d %d", h, m+30);
        
        
        
    }
    
}
