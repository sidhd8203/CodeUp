/*평가 내용
평가 : 내용
A : best!!!
B : good!!
C : run!
D : slowly~
나머지 문자들 : what?*/

#include<stdio.h>

int main(){
    char a;
    
    scanf("%c", &a);
    
    switch(a){
        case 'A' : printf("best!!!"); break;
        case 'B' : printf("good!!"); break;
        case 'C' : printf("run!"); break;
        case 'D' : printf("slowly~"); break;
        default : printf("what?");
    }
    
}
