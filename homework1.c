#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char id[5]={'0','0','0','0','0'};
    int cpscore[5]={0,0,0,0,0};
    int engscore[5]={0,0,0,0,0};
    int final_cpscore[5]={0,0,0,0,0};
    int final_engscore[5]={0,0,0,0,0};
    for (int i =0; i<5; i++)
    {
        printf("请输入第%d位学生的ID: ", i+1);
        scanf("%8s", &id[i]);
        printf("请输入%s同学的计算物理和英语分数: ", &id[i]);
        scanf("%d %d", &cpscore[i], &engscore[i]);
        final_cpscore[i] = sqrt(cpscore[i]) * 10;
        final_engscore[i] = sqrt(engscore[i]) * 10;
        if (final_cpscore[i] < 60)
        {
            printf("%s同学的计算物理成绩不及格\n", &id[i]);
        }
        else
        {
            printf("%s同学通过了计算物理考试\n", &id[i]);
        }
        if (final_engscore[i] < 60)
        {
            printf("%s同学的英语成绩不及格\n", &id[i]);
        }
        else
        {
            printf("%s同学通过了英语考试\n", &id[i]);
        }
    }
    return 0;
}