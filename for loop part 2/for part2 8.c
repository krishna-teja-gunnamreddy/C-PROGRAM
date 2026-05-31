#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    int total_loss=0;
    int high_loss=0;
    for(int i=1;i<=days;i++){
        int loss;
        scanf("%d",&loss);
        if(loss>100){
            high_loss++;
        }
        total_loss+=loss;
    }
    printf("Total Loss: %d\n\n",total_loss);
    printf("High loss Days: %d",high_loss);
    return 0;
}