// Program to accept marks of five subjects and finds percentage and prints grades according to the following criteria:
//Between 90-100%--------------Print ‘A’
//80-90%----------------------------Print ‘B’
//60-80%---------------------------Print ‘C’
//Below 60%----------------------Print ‘D’

#include <stdio.h>
int main()
{
    float subject1, subject2, subject3, subject4, subject5;
    
    float total, percentage;
    
    printf("Enter marks of five subjects (out of 100):\n");
    
    printf("Subject 1: ");
    scanf("%f", &subject1);
    
    printf("Subject 2: ");
    scanf("%f", &subject2);
    
    printf("Subject 3: ");
    scanf("%f", &subject3);
    
    printf("Subject 4: ");
    scanf("%f", &subject4);
    
    printf("Subject 5: ");
    scanf("%f", &subject5);
    
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total / 5);
    
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    if (percentage >= 90 && percentage <= 100)
        printf("Grade: A\n");
    else if (percentage >= 80 && percentage < 90)
        printf("Grade: B\n");
    else if (percentage >= 60 && percentage < 80)
        printf("Grade: C\n");
    else
        printf("Grade: D\n");

}