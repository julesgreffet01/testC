#include <stdio.h>
#include "Header/main.h"



int main(void) {
    int heures = 2, minutes = 120;

    //fonctionBoucles(2);
    //fonctionDeBase();


    decoupeMinutes(&heures,&minutes);
    printf("%d heures et %d minutes",heures,minutes);
    printf("\n");
    return 0;
}