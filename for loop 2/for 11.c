#include <stdio.h>
int main() {
    int num,sum=0,reverse  ;
    scanf("%d",&num);
    for(int i=0;num!=0;i++){
        reverse=num%10;
        sum+=reverse;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}