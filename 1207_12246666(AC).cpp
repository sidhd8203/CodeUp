/*입력으로 윷의 4가지 상태가 들어온다.

윷의 상태는 0이면 뒤집어지지 않은 상태, 1이면 뒤집어진 상태를 말한다.

도 : 1개가 뒤집어진 상태 
개 : 2개가 뒤집어진 상태 
걸 : 3개가 뒤집어진 상태 
윷 : 4개가 뒤집어진 상태 
모 : 하나도 뒤집어지지 않은 상태 

윷 각각의 상태를 보고 도, 개, 걸, 윷, 모를 출력하시오.*/

#include<stdio.h>

int main(){
    
 int a, b, c, d;
 
 scanf("%d %d %d %d",&a,&b,&c,&d);
 if(a+b+c+d==1){
     printf("도");
 }else if(a+b+c+d==2){
     printf("개");
 }else if(a+b+c+d==3){
     printf("걸");
 }else if(a+b+c+d==4){
     printf("윷");
 }else printf("모");
    
}
