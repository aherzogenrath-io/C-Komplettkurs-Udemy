#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool has_money_on_the_bank = true;
    bool has_cash_money = false;
    bool has_debts = true;

    bool has_money = has_money_on_the_bank || has_cash_money;

    if (has_money){
        printf ("We still have some money!\n");
    }

   bool has_debts_and_money = has_debts && has_money;

    if (has_debts_and_money){

        printf("We could pay off the debts\n");
    }

    return 0;
}
