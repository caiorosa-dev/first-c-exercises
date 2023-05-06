//
// Created by Caio on 05/05/2023.
//
#include <stdio.h>
#include <stdbool.h>
#include "../libs/utils.h"

void getMinorNumber() {
    printf("Ola, aperte ENTER quando quiser comecar a digitar os numeros.\n");
    readChar();

    int numberAmount = 1;
    int minorNumber = 0;
    bool firstRun = true;

    do {
        clearTerminal();
        printf("Numero %d. Caso queira terminar insira 'n' senao aperte ENTER para continuar apos digitar o numero.\nMenor numero atual: %d\n\nInsira o proximo numero: ", numberAmount, minorNumber);

        int number = readInt();
        if (number == 0) {
            return;
        }

        if (firstRun) {
            firstRun = false;
            minorNumber = number;
            continue;
        }

        if (minorNumber > number) {
            minorNumber = number;
        }

        printf("\nContinuar: ");
    } while (readChar() != 'n');

    clearTerminal();
    printf("R.");
}