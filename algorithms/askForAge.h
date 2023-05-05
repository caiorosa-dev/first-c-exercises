//
// Created by caior on 04/05/2023.
//
#include <stdio.h>
#include <string.h>
#include "../libs/utils.h"

void askForAges() {
    printf("Primeiramente, informe a quantidade de pessoas a serem analisadas.\n\nQuantidade: ");
    int numberOfPeople = readInt();

    int ages[numberOfPeople];

    clearTerminal();

    for (int i = 0; i < numberOfPeople; i++) {
        int currentPerson = i + 1;
        printf("Pessoa %d de %d. \n\nQual a idade desta pessoa: ", currentPerson, numberOfPeople);
        int age = readInt();

        ages[i] = age;
        clearTerminal();
    }

    int adults = 0;
    char formattedString[numberOfPeople * 4];
    sprintf(formattedString, "");

    for (int i = 0; i < numberOfPeople; i++) {
        int age = ages[i];

        if (age >= 18) adults++;

        char stringNumber[3];
        itoa(age, stringNumber, 10);

        strcat(formattedString, stringNumber);
        if ((i + 1) != numberOfPeople) strcat(formattedString, ", ");
    }

    printf("Entre as seguintes idades: \n[%s]\n\nDentre as idades informadas, existem %d adultos.", formattedString, adults);
}