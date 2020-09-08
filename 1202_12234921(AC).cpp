/*재호는 이번 시험에 받은 성적이 궁금했다.

점수가 입력되면 등급을 출력하시오.

등급)

 90점 이상 : A

80점 이상 : B

70점 이상 : C

60점 이상 : D

60점 미만 : F*/

#include<stdio.h>

int main(){
    
    int a;
    scanf("%d", &a);
    
    if(100 >= a && a >=90){
        printf("A");
    }else if(89 >= a && a >= 80){
        printf("B");
    }else if(79 >= a && a >= 70){
        printf("C");
    }else if(69>= a && a >= 60){
        printf("D");
    }else printf("F");
    
}
