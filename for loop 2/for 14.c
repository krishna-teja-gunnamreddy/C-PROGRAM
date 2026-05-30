#include <stdio.h>
int main() {
    int a;
    int r;
    scanf("%d",&a);
    int count=0;
    for (int i=a;i>0;i/10){
        r=a%10;
        if(r%2==0){
            count++;
        }
        a=a/10;
        if(a==0){
            break;
        }
    }
   printf("%d",count);
    return 0;
}