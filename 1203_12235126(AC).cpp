
#include <stdio.h>
 
 
int main (void)
{
    
    int num;
    scanf("%d",&num);
    
    if(num <= 10){printf("정상");}
    else if(num <= 20){printf("과체중");}
    else{printf("비만");}
 
    return 0;
}

