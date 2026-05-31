#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    int count=0,total=0;
    for(int i=0;i<days;i++){
        int gb;
        scanf("%d",&gb);
        if(gb>2){
            count++;
        }
        total+=gb;
    }
    printf("Total Data: %d\n\n",total);
    printf("High Usage Days: %d",count);
    return 0;
}