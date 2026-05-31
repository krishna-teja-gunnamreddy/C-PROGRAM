#include <stdio.h>
int main() {
    int numofsubjects;
    scanf("%d",&numofsubjects); 
    int count=0;
    int avg=0;
    for(int i=0;i<numofsubjects;i++){
        int subject_score;
        scanf("%d",&subject_score);
        if(subject_score<40){
            count++;
        }
        avg+=subject_score;
    }
    printf("Average Score: %d\n\n",(avg/numofsubjects));
    printf("Failed Subjects: %d",count);
    return 0;
}