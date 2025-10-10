/**文字を表記するためのプログラミング**/

#include <stdio.h>

int main()
{
    int okane = 1234;
    printf("%d万円分負けました…\n", okane);
    
    okane = okane/3;
    printf("え！よかった！%d万円分でした",okane);

    return 0;
}