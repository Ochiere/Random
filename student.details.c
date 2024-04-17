#include <stdio.h>

struct Student 
{
    char firstName[50];
    char secondName[50];
    int roll;
    char courses[3][50]; 
};

int main() {
    struct Student students[3]; 
    int i;

    printf("Enter information of students:\n");

    for (i = 0; i < 3; ++i) 
    {
        students[i].roll = i + 1;
        printf("\nFor roll number %d:\n", students[i].roll);

        printf("Enter the names: ");
        scanf("%s", students[i].firstName);
        scanf("%s", students[i].secondName );

        printf("Enter three course names (separated by spaces): ");
        for (int j = 0; j < 3; ++j) 
        {
            scanf("%s", students[i].courses[j]);
        }
    }

    printf("\nDisplaying Information:\n");
    for (i = 0; i < 3; ++i) 
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("Name: %s %s\n", students[i].firstName, students[i].secondName);
        printf("Courses: %s, %s, %s\n", students[i].courses[0], students[i].courses[1], students[i].courses[2]);
    }
    int k;
    printf("If you would like to edit the details of any student enter their roll number below\n");
    scanf("%d", &k);
     printf("Enter the names: ");
        scanf("%s", students[k].firstName);
        scanf("%s", students[k].secondName );
    printf("Enter three course names (separated by spaces): ");
        for (int j = 0; j < 3; ++j) 
        {
            scanf("%s", students[k].courses[j]);
        }
    printf("UPDATE IS:\n");
    printf("\nRoll number: %d\n", k);
        printf("Name: %s %s\n", students[k].firstName, students[k].secondName);
        printf("Courses: %s, %s, %s\n", students[k].courses[0], students[k].courses[1], students[k].courses[2]);
    return 0;
}
