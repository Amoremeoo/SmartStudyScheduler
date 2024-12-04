#include <stdio.h>

int main()
{
    int numSubjects;
    int total_hours;
    char subjects[MAX_SUBJECTS][50];
    int hours[MAX_SUBJECTS];
    int level[MAX_SUBJECTS];
    printf("====================== SMART STUDY SCHEDULAR ======================\n\n");
    printf("\n\nEnter The Total Hours you Wish to study for:");
    scanf("%d", &total_hours);
    printf("\n\nEnter the total  number of subjects you are going to study:");
    scanf("%d", &numSubjects);
    if (numSubjects > MAX_SUBJECTS)
    {
        printf("\n\nYou can only enter up to %d subjects.\n", MAX_SUBJECTS);
        return 1;
    }




    

    return 0;
}