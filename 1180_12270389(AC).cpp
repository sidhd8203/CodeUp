
#include <stdio.h>
 
 
int main (void)
{
    
    int num , a,b;
    scanf("%d",&num);
    
    a = num/10; //10 1
    b = num%10; //1 7
    
    num = (b*10 + a) *2;
    if(num >=100){num = num -100;}
    printf("%d\n",num);
    if(num <=50){
        printf("GOOD");
    }
    else{printf("OH MY GOD");}
 
    return 0;
}

