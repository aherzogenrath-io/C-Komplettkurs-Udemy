#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int age_arno = 30;
    int age_mark = 30;
    int age_sarah = 30;

    bool is_arno_the_youngest = (age_arno < age_mark) && (age_arno < age_sarah);
    bool is_mark_the_youngest = (age_mark < age_arno) && (age_mark < age_sarah);
    bool is_sarah_the_youngest = (age_sarah < age_mark) && (age_sarah < age_arno);

    if (is_arno_the_youngest){
        printf("Arno is the youngest\n");
    }
    else if (is_mark_the_youngest){
        printf("Mark is the youngest\n");
    }
    else if (is_sarah_the_youngest){
        printf("Sarah is the youngest\n");
    }
    else {
        printf("everyone is the same age");
    }



    return 0;
}
