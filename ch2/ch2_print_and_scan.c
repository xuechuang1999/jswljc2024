#include<stdio.h>
#include<stdlib.h> //编译预处理指令
#include<math.h>
int main()
//输入输出函数
{
    double score;
    printf("Please enter your raw score.\n");
    scanf_s("%lf", &score);
    score = sqrt(score) * 10;
    printf("Your final score is %.0f\n", score);
    system("pause");
    return 0;
}