/*학번을 입력 받아 다음 형식으로 출력하시오.

학번은 학년, 반, 번호로 입력된다.

이번에는 학년은 한자리, 반은 두자리, 번호는 세자리로 출력한다.

예)

2 1 20  ===> 201020  으로 출력

2 2 7 ==> 202007 으로 출력

2 3 100 ==>  203100 으로 출력

2 10 111 ==> 210111 로 출력*/

#include<stdio.h>

int main(){
    int a, b, c;
    
    scanf("%d %d %d",&a,&b,&c); // ex) 1 10 8
    printf("%d",a); // 1
    if(b<10){
        
        printf("0"); 
        printf("%d",b);
        
    }else printf("%d",b); // 110
    
    if((c<100) && (c>9)){
        printf("0");
        printf("%d", c); 
    }else if(c<10){
        printf("00");
        printf("%d",c); // 110008
    }else printf("%d",c);
    
}


