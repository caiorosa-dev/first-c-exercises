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

char readChar() {
    char value;

    scanf("%c", &value);
    fflush(stdin);

    return value;
}

int readFloat() {
    float value;

    scanf("%f", &value);
    fflush(stdin);

    return value;
}

char* centralizeString(int widthToCentralize, const char *stringToCentralize) {
    int stringSize = (int) strlen(stringToCentralize);
    int spaces = (widthToCentralize - stringSize) / 2;

    char* finalString = malloc(widthToCentralize * 2);
    sprintf(finalString, "");

    for (int i = 0; i < spaces; ++i) {
        strcat(finalString, " ");
    }

    strcat(finalString, stringToCentralize);

    for (int i = 0; i < spaces; ++i) {
        strcat(finalString, " ");
    }

    return finalString;
}

char* centralizeStringList(int widthToCentralize, const char stringList[][10], const int lines) {
    char* finalString = malloc(widthToCentralize * 2);
    sprintf(finalString, "");

    for (int i = 0; i < lines; ++i) {
        char* line = stringList[i];
        char* centralizedString = centralizeString(widthToCentralize, line);

        strcat(finalString, centralizedString);
        if ((i + 1) < lines) strcat(finalString, "\n");
    }

    return finalString;
}

void clearTerminal() {
    system("cls");
}

#endif //UTILS

