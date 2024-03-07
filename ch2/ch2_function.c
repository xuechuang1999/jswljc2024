#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int i;
int main()
{
    int print_score(double x);
    int score[5]={10, 20, 30, 40, 50};
    for (i=1; i < 6; i++)
        print_score(score[i-1]);
    system("pause");
    return 0;
}
int print_score(double x)
{
    x = sqrt(x) * 10;
    printf("The score of class %d is %.0f\n", i, x);
    return 0;
}