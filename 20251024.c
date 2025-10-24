#include <float.h>
#include<limits.h>
#include<stdio.h>

int main(void)
{
    printf("double型の最大値:%c\n",DBL_MAX);
    printf("double型の最小値:%gf\n",DBL_MAX);
    printf("double型の精進:%g\n",DBL_DIG);
    printf("int型の最大値:%g\n",INT_MAX);
    printf("int型の最小値:%lf\n",INT_MIN);

    return 0;
}