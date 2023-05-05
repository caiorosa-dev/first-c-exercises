//
// Created by Caio on 05/05/2023.
//
#include <stdio.h>
#include <string.h>
#include "../libs/utils.h"

void printMultiplicationTable() {
    printf("Primeiramente, informe de qual numero sera feita a tabuada.\n\nNumero da tabuada: ");
    int multiplicationNumber = readInt();
    clearTerminal();

    printf("Agora informe qual o numero maximo a ser calculado.\n\nNumero maximo: ");
    int maxNumber = readInt();
    clearTerminal();

    int i = 1;
    int currentResult;

    do {
        currentResult = i * multiplicationNumber;
        i++;
    } while((i * multiplicationNumber) <= maxNumber);

    printf("Sendo o numero maximo %d.\n\nO numero da tabuada maximo foi %d.", maxNumber, currentResult);
}
