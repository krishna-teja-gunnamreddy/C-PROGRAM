#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
               printf(" No");
               return 0;
            }
        }
    }
    printf("Yes");
    return 0;
}