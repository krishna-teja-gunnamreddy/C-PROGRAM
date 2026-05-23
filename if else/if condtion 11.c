#include <stdio.h>
int main() {
    int    a;
    scanf("%d",&a);
    if(a>=90&&a<=100){
        printf("Grade A");
    }
    else if(a>=75&&a<90){
        printf("Grade B");
    }
    else{
        printf("Grade C");
    }
    return 0;
}