#include <stdio.h>

int main()
{
    int age_arno = 25;
    int mod = 4;
    if ((age_arno % mod) == 0){
        printf("your age is divisable by %d\n", mod);
    }
    else {
        printf("your age isn't divisable by %d\n", mod);
    }

    return 0;
}
