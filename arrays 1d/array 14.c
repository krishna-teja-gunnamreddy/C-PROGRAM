#include <stdio.h>
int main() {
    int size,i=0;
    scanf("%d",&size);
    int arr[size];
    for (i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[i];
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            if(arr[i]>min){
                min=arr[i];
            }
        }
    }
    if(min>0){
        printf("  %d",min);
    }
    else{
        printf("No Postive");
    }
    return 0;
}