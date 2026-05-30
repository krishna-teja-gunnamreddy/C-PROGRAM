#include <stdio.h>
int main() {
    int num;
    int prime_count=0;
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
               count++;
            }
            
        }if(count==2){
                //printf("%d  " ,i);
                prime_count++;
            }
    }
    printf("%d  " ,prime_count);
    return 0;
}