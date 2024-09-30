#include <stdio.h>

int main() {
int percentage;
char grade;
printf("Enter the student's percentage: ");
scanf("%d", &percentage);
grade = (percentage >= 90) ? 'A' :
    (percentage >= 80) ? 'B' :
    (percentage >= 70) ? 'C' :
    (percentage >= 60) ? 'D' : 'F';
    printf("The grade is: %c\n", grade);
return 0;
}
