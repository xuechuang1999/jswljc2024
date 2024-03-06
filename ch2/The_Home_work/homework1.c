#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//将函数进行封装，目前版本仍有bug
int main()
{
    char id[5] = {'0', '0', '0', '0', '0'};
    int cpscore[5] = {0, 0, 0, 0, 0};
    int engscore[5] = {0, 0, 0, 0, 0};
    int final_cpscore[5] = {0, 0, 0, 0, 0};
    int final_engscore[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++)
    {
        printf("请输入第%d位学生的ID: ", i + 1);
        scanf("%c", &id[i]);
        printf("请输入%c同学的计算物理和英语分数: ", id[i]);
        scanf("%d,%d", &cpscore[i], &engscore[i]);
        final_cpscore[i] = sqrt(cpscore[i]) * 10;
        final_engscore[i] = sqrt(engscore[i]) * 10;
        if (final_cpscore[i] < 60)
        {
            printf("%c同学的计算物理成绩不及格\n", id[i]);
        }
        else
        {
            printf("%c同学通过了计算物理考试\n", id[i]);
        }
        if (final_engscore[i] < 60)
        {
            printf("%c同学的英语成绩不及格\n", id[i]);
        }
        else
        {
            printf("%c同学通过了英语考试\n", id[i]);
        }
    }
    return 0;
}
