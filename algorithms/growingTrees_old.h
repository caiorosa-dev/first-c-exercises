//
// Created by Caio on 05/05/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<unistd.h>
#include "../libs/utils.h"

const int width = 64;

const char eucaliptoTop[][10] = { "_", "/*\\", "/ | \\"};
const char oakTop[][10] = { "/*\\", "/ | \\", "/  |  \\", "---|---"};
const float eucaliptoGrowingRate = 0.03;
const float oakGrowingRate = 0.02;

float eucaliptoHeight = 1.10;
float oakHeight = 1.50;
int currentYear = 0;

char* getHeightChars(const int widthToRender, const int amount) {
    char* finalString = malloc(widthToRender);
    sprintf(finalString, "");

    char* centralizedBar = centralizeString(widthToRender, "|");

    for (int i = 0; i < amount; i++) {
        strcat(finalString, "\n");
        strcat(finalString, centralizedBar);
    }

    return finalString;
}

void renderTrees() {
    clearTerminal();

    int widthByTree = width / 2;

    int oakHeightCharsAmount = floorf(oakHeight);
    int eucaliptoHeightCharsAmount = floorf(eucaliptoHeight);

    char* oakBars = getHeightChars(widthByTree, oakHeightCharsAmount);
    char* eucaliptoBars = getHeightChars(widthByTree, eucaliptoHeightCharsAmount);

    char* centralizedOakName = centralizeString(widthByTree, "Carvalho");
    char* centralizedOakHeight = malloc(width);
    sprintf(centralizedOakHeight, "%.2fm", oakHeight);
    centralizedOakHeight = centralizeString(widthByTree, centralizedOakHeight);

    char* centralizedEucaliptoName = centralizeString(widthByTree, "Eucalipto");
    char* centralizedEucaliptoHeight = malloc(width);
    sprintf(centralizedEucaliptoHeight, "%.2fm", eucaliptoHeight);
    centralizedEucaliptoHeight = centralizeString(widthByTree, centralizedEucaliptoHeight);

    char* oakCentralizedTop = centralizeStringList(widthByTree, oakTop, 4);
    char* eucaliptoCentralizedTop = centralizeStringList(widthByTree, eucaliptoTop, 3);

    char* eucaliptoTree = malloc(width * 2);
    char* oakTree = malloc(width * 2);
    sprintf(eucaliptoTree, "");
    sprintf(oakTree, "");

    strcat(eucaliptoTree, eucaliptoCentralizedTop);
    strcat(eucaliptoTree, eucaliptoBars);
    strcat(oakTree, "\n");
    strcat(oakTree, centralizedEucaliptoName);
    strcat(oakTree, "\n");
    strcat(oakTree, centralizedEucaliptoHeight);

    strcat(oakTree, "\n\n");
    strcat(oakTree, oakCentralizedTop);
    strcat(oakTree, oakBars);
    strcat(oakTree, "\n\n");
    strcat(oakTree, centralizedOakName);
    strcat(oakTree, "\n");
    strcat(oakTree, centralizedOakHeight);

    printf("Ano atual: %d.\n%s\n\n%s", currentYear, eucaliptoTree, oakTree);
}

void growingTree() {
    printf("Ola, por favor, antes de continuar, aumente o tamanho de seu terminal! Quando estiver pronto, aperte ENTER.\n\nPronto? ");
    readChar();

    while (eucaliptoHeight <= oakHeight) {
        eucaliptoHeight += eucaliptoGrowingRate;
        oakHeight += oakGrowingRate;
        currentYear++;
        renderTrees();
    }
}
