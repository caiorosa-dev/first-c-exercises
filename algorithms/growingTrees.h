//
// Created by Caio on 05/05/2023.
//
#include <stdio.h>
#include "../libs/utils.h"

void growingTree() {
    printf("Ola, aperte ENTER para comecar.");
    readChar();

    const float eucaliptoGrowingRate = 0.03f;
    const float oakGrowingRate = 0.02f;

    float eucaliptoHeight = 1.10f;
    float oakHeight = 1.50f;
    int totalYears = 0;

    while (eucaliptoHeight <= oakHeight) {
        eucaliptoHeight += eucaliptoGrowingRate;
        oakHeight += oakGrowingRate;
        totalYears++;
    }

    clearTerminal();
    printf("Sao necessarios %d anos para o eucalipto ficar maior que a palmeira.", totalYears);
}
