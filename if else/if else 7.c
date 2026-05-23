#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>=40&&marks<=100){
        printf(" Pass");
    }
    else if(marks>=0&&marks<40){
        printf(" Fail");
    }
    else{
        printf("Invalid marks");
    }
    return 0;
}