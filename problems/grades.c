#include <stdio.h>

int getInput()
{
    int num = 0;
    scanf("%d", &num);
    return num;
}

float getPercentage(int marks, int numOfMarks)
{
    float percentage = marks / numOfMarks;
    return percentage;
}

char getGrade(float percentage)
{
    if (percentage >= 90.0)
    {
        return 'A';
    }
    else if (percentage >= 80.0)
    {
        return 'B';
    }
    else if (percentage >= 70.0)
    {
        return 'C';
    }
    else if (percentage >= 60.0)
    {
        return 'D';
    } else if(percentage >= 40.0){
        return 'E';
    } else {
        return 'F';
    }
}

int main()
{
    printf("%s: ", "Input marks of five subjects");
    int subjectMark = getInput();
    int subjectMark2 = getInput();
    int subjectMark3 = getInput();
    int subjectMark4 = getInput();
    int subjectMark5 = getInput();
    int sumOfMarks = subjectMark + subjectMark2 + subjectMark3 + subjectMark4 + subjectMark5;
    float percentage = getPercentage(sumOfMarks, 5);
    char grade = getGrade(percentage);
    printf("Percentage: %0.2f\n", percentage);
    printf("Grade: %c", grade);
    return 0;
}
