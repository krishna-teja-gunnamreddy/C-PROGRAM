#include <stdio.h>
int main() {
    int num,reverse  ;
    scanf("%d",&num);
    for(int i=0;num!=0;i++){
        reverse=num%10;
        printf("%d ",reverse);
        num=num/10;
    }
    return 0;
}