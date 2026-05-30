#include <stdio.h>
int main() {
    int num,reverse ,count=0 ;
    scanf("%d",&num);
    for(int i=0;num!=0;i++){
        reverse=num%10;
        count++;
        num=num/10;
    }
    printf("%d",count);
    return 0;
}
