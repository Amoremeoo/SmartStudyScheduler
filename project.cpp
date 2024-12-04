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

// Input subject names, hours, and levels
    for (int i = 0; i < numSubjects; i++) {
    printf("\n\nEnter the name of subject %d: ", i+1);
    scanf(" %[^\n]", subjects[i]);
        printf("\n\nEnter the number of hours you wish to allocate to %s (out of %d): \n", subjects[i],total_hours);
        scanf("%d", &hours[i]);
        if (hours[i] <= 0 || hours[i] > 24) {
            printf("\nInvalid number of hours. Please enter a value between (1 and 24).\n");
            i--; 
        }
        printf("\nEnter the difficulty level for %s (1-Easy 2-Medium 3-Hard): ", subjects[i]);
        scanf("%d", &level[i]);
    }
    printf("\nTime Allocation Summary:\n");
    printf("%-20s %-10s %-10s\n", "Subject", "Hours", "Level");
    printf("-------------------------------\n");
    for (int i = 0; i < numSubjects; i++) {
        printf("%-20s %-10d %-10d\n", subjects[i], hours[i], level[i]);
        details1(subjects[i], hours[i], level[i]);
    }
    // File handling to save the data
    FILE *file = fopen("subjects.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    // Save the subjects, hours, and levels to the file
    for (int i = 0; i < numSubjects; i++) {
        fprintf(file, "%s %d %d\n", subjects[i], hours[i], level[i]);
    }
    fclose(file);
    printf("Data saved to subjects.txt successfully.\n");
//    // Reading the data back from the file
//    printf("\nReading data from subjects.txt:\n");
//    file = fopen("subjects.txt", "r");
//    if (file == NULL) {
//        printf("Error opening file for reading.\n");
//        return 1;
//    }
//    printf("%-20s %-10s %-10s\n", "Subject", "Hours", "Level");
//    printf("-------------------------------\n");
//    char subject[50]; 
//    int hour, lvl;
//    while (fscanf(file, " %[^\n] %d %d", subject, &hour, &lvl) != EOF) {
//        printf("%-20s %-10d %-10d\n", subject, hour, lvl);
//        details1(subject, hour, lvl);
//    }
//    fclose(file);
//    printf(">>>>>>>>>>>>>>****I Hope This Helped***<<<<<<<<<<<<<<<<<\n");
//    printf(">>>>>>>>>>>>>>****Remember: Consistency is the key to success<<<<<<<<<<<<****");
    return 0;
	}




    return 0;
}