#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    // Quadrat: Seitenlänge a vom User einlesen
    // Überprüfe: Ob der User eine "gültige" Zahl eingegeben hat
    // Gebe dem User solange die Möglichkeit die Zahl einzugeben,
    //      bis sie gültig ist
    // Berechne den Umfang und den Flaecheninhalt des Quadrats
    // Gebe diese Werte dann in der Konsole aus
    // u = 4 * a
    // a = a**2
    float seitenlänge;
    float umfang;
    float fläche;
    while (true)
    {
    printf("Seitenlänge des Quadrats:");
    scanf("%f", &seitenlänge);
    if (seitenlänge > 0.0F){
        break;
    }
    printf("ERROR! Ungültige Seitenlänge\n");
    }
    umfang = 4 * seitenlänge;
    fläche = seitenlänge * seitenlänge;

    printf("Umfang des Quadrats: %f\n", umfang);
    printf("Fläche des Quadrats: %f\n", fläche);


    return 0;

}
