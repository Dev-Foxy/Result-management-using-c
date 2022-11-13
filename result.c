#include <stdio.h>

void average(int math, int english, int science)
{
    float average;
    average = (float)(math + english + science) / 3;
    printf("Average: %f\n", average);
}

void total(int math, int english, int science)
{
    int total = math + english + science;
    printf("Total: %d\n", total);
}

void grade(int math, int english, int science)
{
    if (math < 40 && math >= 0)
    {
        printf("F in Math\n");
    }
    else if (math >= 40 && math < 70)
    {
        printf("B in Math\n");
    }
    else
    {
        printf("A in Math\n");
    }
    // for english
    if (english < 40 && english >= 0)
    {
        printf("F in English\n");
    }
    else if (english >= 40 && english < 70)
    {
        printf("B in English\n");
    }
    else
    {
        printf("A in English\n");
    }

    // for science
    if (science < 40 && science >= 0)
    {
        printf("F in Science\n");
    }
    else if (science >= 40 && science < 70)
    {
        printf("B in Science\n");
    }
    else
    {
        printf("A in Science\n");
    }
}

int main()
{
    int math, english, science;
    printf("Enter math result\n");
    scanf("%d", &math);
    printf("Enter english result\n");
    scanf("%d", &english);
    printf("Enter science result\n");
    scanf("%d", &science);
    if ((math < 0 || math > 100) || (english < 0 || english > 100) || (science < 0 || science > 100))
    {
        printf("Invalid marks! Try again\n");
    }
    else
    {
        printf("\t\tResult\n");
        grade(math, english, science);
        total(math, english, science);
        average(math, english, science);
    }
}