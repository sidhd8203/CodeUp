#include<stdio.h>
#include<math.h>

int main(){
    
    int a,b;
    float h;
    
    scanf("%d %d", &a,&b);
    
    h = a+b;
    
    if(a-b > h){h = a-b;}
    if(b-a > h){h = b-a;}
    
    if(a*b > h){h = a*b;}
    
    if((float)(a/b) > h){h = (float)(a/b);}
    if((float)(b/a) > h){h = (float)(b/a);}
    
    if(pow(a,b) > h){h = pow(a,b);}
    if(pow(b,a) > h){h = pow(b,a);}
    
    printf("%.06f",h);
    
}


