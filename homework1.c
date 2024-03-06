#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char id[5]={'0','0,0,0,0};
    int cpscore[5]={0,0,0,0,0};
    int engscore[5]={0,0,0,0,0};
    int final_cpscore[5]={0,0,0,0,0};
    int final_engscore[5]={0,0,0,0,0};
    for (int i =0; i<5; i++)
    {
        printf("Please enter the %d student ID: ", i+1);
        scanf("%8s", &id[i]);
        printf("Enter the score of student %s in Computer Science and  English: ", &id[i]);
        scanf("%d %d", &cpscore[i], &engscore[i]);
        final_cpscore[i] = sqrt(cpscore[i]) * 10;
        final_engscore[i] = sqrt(engscore[i]) * 10;
        if (final_cpscore[i] < 60)
        {
            printf("Student %d failed in Computer Science\n", &id[i]);
        }
        else
        {
            printf("Student %d passed in Computer Science\n", &id[i]);
        }
        if (final_engscore[i] < 60)
        {
            printf("Student %d failed in English\n", &id[i]);
        }
        else
        {
            printf("Student %d passed in Eglish\n", &id[i]);
        }
    }
    return 0;
}