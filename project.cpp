#include <stdio.h>
const int MAX_SUBJECTS = 10; //used for 10 subjects
void details1(char *subject, int hours, int level) { 
    scanf("%d",&hours);
	if(hours < 0 || hours > 24) {
        printf("\tWrong choice. Please select again\n");
        return; 
    } else {
        printf("\tAlright, let's start!\n");
    }
    scanf("%d",&level);
    switch(level) {
        case 1:
            printf("\tYou selected Easy Level of study\n");
            break;
        case 2:
            printf("\tYou selected Medium Level of study\n");
            break;
        case 3:
            printf("\tYou selected Hard Level of study\n");
            break;
        default:
            printf("\tWrong Choice\n");
    }
    printf("\tYou wish to study %s for %d hours\n*************>>>No worries I am here to help YOU!<<<<*************\n", subject, hours);
}

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