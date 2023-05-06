//
// Created by Caio on 05/05/2023.
//
#include <stdio.h>
#include "../libs/utils.h"

void calculateFactorial() {
    printf("Informe qual numero sera realizado o fatorial.\n\nNumero: ");
    int factorialNumber = readInt();

    int currentNumber = 1;
    for (int i = factorialNumber; i > 0; i--) {
        currentNumber *= i;
    }

    clearTerminal();
    printf("Resultado do fatorial de %d igual a %d", factorialNumber, currentNumber);
}