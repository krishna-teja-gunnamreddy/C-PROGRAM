#include <stdio.h>
int main() {
    int num;
    int remainder,reverse=0;
    scanf("%d",&num);
    int temp=num;
    for(int i=0;num>0;i++){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
    }
    if(temp==reverse){
        printf("%d is a palindrome",temp);
    }
    else{
         printf("%d is not a palindrome",temp);
    }
    return 0;
}