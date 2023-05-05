//
// Created by caior on 04/05/2023.
//

#include <stdlib.h>
#include <stdio.h>

#ifndef UTILS
#define UTILS

int readInt() {
    int value;

    scanf("%d", &value);
    fflush(stdin);

    return value;
}

int readFloat() {
    float value;

    scanf("%f", &value);
    fflush(stdin);

    return value;
}

void clearTerminal() {
    system("cls");
}

#endif //UTILS

