/*scanf("%s",&str); 대신 fgets(str, 31, stdin);을 사용하면 공백도 입력받을 수 있습니다.*/

#include<stdio.h>

int main(){
    
    char str[30];
    fgets(str, 30, stdin);
    printf("%s", str);
    
}
