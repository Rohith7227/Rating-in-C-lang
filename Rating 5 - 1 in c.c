#include<stdio.h>

int main()
{
    int rating;

    printf("Enter Rating : ");
    scanf("%d", &rating);

    if (rating == 5)
    {
        printf("Excellent");
    }
    else if (rating == 4)
    {
        printf("Good");
    }
    else if (rating == 3)
    {
        printf("Average");
    }
    else if (rating == 2)
    {
        printf("Poor");
    }
    else if (rating == 1)
    {
        printf("Bad");
    }
    else
    {
        printf("Not Applicable");
    }
    return 0;
}