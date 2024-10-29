#include <stdio.h>

void f(int v)
{
    printf("%d\n", v);
}

int main(void)
{
    int i = 0;
    printf("%d\n", i++); // post
    printf("%d\n", ++i); // pre

    i = 0;
    f(i++);
    f(++i);

    return 0;
}
