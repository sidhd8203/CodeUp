//섭씨 온도가 입력되면 화씨 온도로 변환하시오.

//화씨 온도 = 9 / 5 * 섭씨온도 + 32

#include<stdio.h>

int main(){
    float s, h = 0.0;
    scanf("%f", &s);
    h = (1.8 * s) + 32;
    printf("%.3f", h);
    
    
}
