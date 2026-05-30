#include <stdio.h>
int main() {
    int a;
    int r;
    scanf("%d",&a);
    int prime=0;
    for (int i=0;i<a;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            prime++;
        }
    }
   printf("%d",prime);
    return 0;
}