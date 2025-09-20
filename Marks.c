//Percentage of Marks of 5 Subjects 
#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,Perc;
    printf("Enter the marks of Subject 1 : ");
    scanf("%f",&sub1);
    printf("Enter the marks of Subject 2 : ");
    scanf("%f",&sub2);
    printf("Enter the marks of Subject 3 : ");
    scanf("%f",&sub3);
    printf("Enter the marks of Subject 4 : ");
    scanf("%f",&sub4);
    printf("Enter the marks of Subject 5 : ");
    scanf("%f",&sub5);
    Perc = (sub1+sub2+sub3+sub4+sub5)/5;
    printf("The Percentage for the Student will be : %f", Perc);
}