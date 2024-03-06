#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double score[5][2]; 

int j;

double final_score(double x)
{
    x = sqrt(x) * 10;
    return x;
}

int main()
{
    int i;
    char id[5][10];

    for(i = 0; i < 5; i++)
    {
        printf("请输入学生学号: ");
        scanf("%s", id[i]);
        printf("请输入学生计算物理初始成绩，英语初始成绩: ");
        scanf("%lf,%lf", &score[i][0], &score[i][1]);
        score[i][0]=final_score(score[i][0]);
        score[i][1]=final_score(score[i][1]);
    }
    int k;
    for(k=0;k<5;k++)
    {
        if (score[k][0] > 60.0 && score[k][1] > 60.0)
            printf("%s同学通过物理考试,通过英语考试\n", id[k]);
        else if (score[k][0] > 60.0 && score[k][1] < 60.0)
            printf("%s同学通过物理考试,未通过英语考试\n", id[k]);
        else if (score[k][0] < 60.0 && score[k][1] > 60.0)
            printf("%s同学未通过物理考试,通过英语考试\n", id[k]);
        else
            printf("%s同学未通过物理考试,未通过英语考试\n", id[k]);
    }
    double average[5];
    int m;
    for(m;m<5;m++)
    {
        average[m]=(score[m][0]+score[m][1])/2;
        printf("%s同学的平均成绩为为%f\n",id[m],average[m]);
    }
    for(i = 0; i < 5 - 1; i++)
    {
        for(k = 0; k < 5 - i - 1; k++)
        {
            if(average[k] < average[k + 1])
            { 
                double temp = average[k];
                average[k] = average[k + 1];
                average[k + 1] = temp;
                
                char temp_id[10];
                strcpy(temp_id, id[k]);
                strcpy(id[k], id[k + 1]);
                strcpy(id[k + 1], temp_id);
            }
        }
    }
    
    printf("\n排序后的学生平均成绩为：\n");
    for(i = 0; i < 5; i++)
    {
        printf("%s同学的平均成绩为 %f\n", id[i], average[i]);
    }    
    system("pause");
    return 0;
}
