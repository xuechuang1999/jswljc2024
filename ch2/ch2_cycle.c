#include<stdio.h>
#include<stdlib.h> //编译预处理指令
#include<math.h>

int main()
{
    int i;
    int score[5]={61, 62, 63, 64, 65};
    for (i=1; i < 6; i++)
    {
        printf("The score of class %d is %d\n", i, score[i-1]);
    }  
    system("pause");
    return 0; 
}