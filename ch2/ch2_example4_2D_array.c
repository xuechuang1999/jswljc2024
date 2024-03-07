#include<stdio.h>
#include<stdlib.h>

int main()
{
    int score[3][2]={{11,22},{33,44},{55,66}};
    printf("第一个同学两门课的成绩依次是%d和%d\n",score[0][0],score[0][1]);
    printf("第二个同学两门课的成绩依次是%d和%d\n",score[1][0],score[1][1]);
    printf("第三个同学两门课的成绩依次是%d和%d\n",score[2][0],score[2][1]);
    system("pause");
    return 0;
}