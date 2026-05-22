#include <stdio.h>

int main() {
    int a,n,d,count=0;
    scanf("%d",&a);
    n=100;
    for(int i=0;i<n;i++){
        d=a%2;
        if(d==1){
            count++;
        }
        a=a/2;
    }

    printf("%d",count);
    return 0;
}