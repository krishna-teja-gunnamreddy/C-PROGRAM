#include <stdio.h>
int main() {
    int a;
    int m;
    int sum=0;;
    scanf("%d",&m);
   scanf("%d",&a);
    for (int i=1;i<=a;i++){
        if(i%m==0){
            sum+=i;
        }
    }
   printf("%d",sum);
    return 0;
}