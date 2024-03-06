//the structure of program
//头文件
#include <stdio.h>
#include <stdlib.h>

//全局变量
int a = 1;
int b = 2;

//子函数:在主函数或子函数间互相调用，内部变量只在调用过程中有效
int plus(int aa, int bb)
{
    return aa + bb;
}

//主函数
int main()
{
    int c = 3;
    int d = 4;
    c = plus(a,b)+d;
    printf("c=%d\n",c);
    return 0;
}