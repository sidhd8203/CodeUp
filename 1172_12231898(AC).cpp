   #include<stdio.h>
   
   
   int main(){
   
   int num1, num2, num3, temp;
   scanf("%d %d %d", &num1, &num2, &num3);
   
   if(num1 >= num2){ // 비교를 하고 만약에 1이 크면 2를 뒤로 보낸다
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if(num2 >= num3){ // 2가 3보다 크면 
        temp = num3;
        num3 = num2;
        num2 = temp;
    }
    if(num1 >= num2){
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
 
    printf("%d %d %d",num1,num2,num3);
    
   }

