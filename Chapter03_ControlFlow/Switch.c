#include <stdio.h>

enum Beverage
{
    NO_BEVERAGE,
    WATER,
    COLA,
    FANTA,
    SPRITE,
    COFFEE,
};

enum CaffeineBeverage
{
    CAFFEINE_BEVERAGE_COFFEE,
    CAFFEINE_BEVERAGE_ENERGY_DRINK,

}

int main(void)
{
    enum Beverage selected_beverage;
    printf("select a beverage:\nWater(1), Cola(2), Fanta(3), \nSprite(4), Coffee(5)\n");
    scanf("%d", &selected_beverage);

    switch(selected_beverage){
        case WATER: {
            printf("you selected Water.\n");
            break;
        }
        case COLA: {
            printf("you selected Cola.\n");
            break;
        }
        case FANTA:{
            printf("you selected Fanta.\n");
            break;
        }
        case SPRITE:{
            printf("you selected Sprite.\n");
            break;
        }
        case COFFEE:{
            printf("you selected Coffee .\n");
            break;
        }
        default:{
            printf("ERROR wrong input\n");
        }
    }
    return 0;
}
