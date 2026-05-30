#include <stdio.h>
int main() {
    int a;
    int sum=0;
    scanf("%d",&a);
   //scanf("%d",&r);
    for (int i=1;i<a;i++){
        if(a%i==0){
            sum+=i;
        }
    }
   if(sum==a){
    printf("perfect number");
   }
   else{
    printf("not perfect number");
   }
    return 0;
}