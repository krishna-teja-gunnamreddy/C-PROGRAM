#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
   int r1,r2;
   if(num1>num2){
    for(int i=1;i<=num1;i++){
        if((num1%i==0)&&(num2%i==0)){
            r1=i;
        }
    }
    printf("%d  ",r1);
    }
   else if(num1<num2){
    for(int i=1;i<=num2;i++){
        if((num1%i==0)&&(num2%i==0)){
            r2=i; 
        }
    }
    printf("%d  ",r2);
    }
    return 0;
}