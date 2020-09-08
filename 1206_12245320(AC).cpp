/*두 자연수 a, b가 주어진다.

b가 a의 배수이면 "a*x=b"를 출력하고,

a가 b의 배수이면 "b*x=a"를 출력하고,

배수관계가 아니면 "none"을 출력하시오.

예) 

5 10    ====> 5*2=10

14 2   ======> 2*7=14

3 7 =====> none*/

#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d",&a, &b);
    
    if(a>b){
        c = a/b; // 10 2 = 5   7/3 2 
        if(a-(b*c)==0){ //
        printf("%d*%d=%d",b, c, a); // 2 * 5 = 10
        }else printf("none");
    }else if(a<b) {
        c = b/a; // 2 10 = 5
        if(b-(a*c)==0){
        printf("%d*%d=%d",a, c, b); // 5 * 2 = 10
        }else printf("none");
    }else if(a=b){
        b = 1;
        printf("%d*%d=%d",a,b,a*b);
    }
    
    
    
    
}
