#include <stdio.h>

int main(void)
{
    int age1 = 28;
    int age2 = 56;

    int older_age1;
    if (age1 > age2){
        older_age1 = age1;
    }
    else {
        older_age1 = age2;
    }

    int older_age2 = age1 > age2 ? age1 : age2;

    return 0;
}
