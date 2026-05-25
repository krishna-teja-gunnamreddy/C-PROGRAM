#include <stdio.h>
int main() {
   int marks,value;
   scanf("%d",&marks);
    value=marks/10;
    switch (value){
        case 10:
        printf("Grade A");
        break;
        case 9:
        printf("Grade A");
        break;
        case 8:
        printf("Grade B");
        break;
        case 7:
        printf("Grade C");
        break;
        case 6:
        printf("Grade D");
        break;
        case 5:
        printf("Grade E");
        break;
        case 4:
        printf("Grade F");
        break;
        case 3:
        printf("Supplementay");
        break;
        case 2:
        printf("Fail");
        break;
        case 1:
        printf("Fail");
        break;
        case 0:
        printf("Fail");
        break;
        default:
        printf("invaild");
    }
    return 0;
}