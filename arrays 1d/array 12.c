#include <stdio.h>
int main() {
    int size,sum;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sum);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d   %d",arr[i],arr[j]);
                return 0;
            }
        }
    }
    printf("No Pair");
    return 0;
}