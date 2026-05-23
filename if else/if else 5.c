#include <stdio.h>
int main() {
    float data ;
    scanf("%f",&data);
    if(data>2){
        printf(" Data limit exceeded");
    }
    else if(data>0&&data<=2){
        printf("Data within limit");
    }
    else{
        printf("Invalid");
    }
    return 0;
}