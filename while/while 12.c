#include <stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int max=4+INT_MIN,count=0,i=1;
    while(i<=n){
        int voltage;
        scanf("%d",&voltage);
        if(voltage>5){
            count++;
        }
        if(voltage>max){
            max=voltage;
        }
        i++;
    }
    printf("Max Usage: %d\nSurge Hours: %d",max,count);
    return 0;
}