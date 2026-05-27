#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int c[size/2],k[size/2];
     for(int j=0;j<size/2;j++){
        c[j]=arr[j];
        }
        for(int z=size-1;z>size/2;z--){
            k[z]=arr[z];
        }
        for(int i=0;i<size/2;i++){
            if(k[size-1]!=c[i]){
                printf("No");
                return 0;
            } 
            size--;
        }
    printf("Yes");
    return 0;
}