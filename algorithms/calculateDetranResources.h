//
// Created by caior on 04/05/2023.
//
#include <stdio.h>
#include <string.h>
#include "../libs/utils.h"

void calculateDetranResources() {
    char typesNames[][10] = { "Leve", "Media", "Grave", "Gravissima" };
    float typesPrices[] = { 100.0, 250.50, 500.75, 2000.25 };

    char ticketTypesString[] = "1 - Leve (R$100,0)\n2 - Media (R$250.50)\n3 - Grave (R$500.75)\n4 - Gravissima (R$2000.25)";

    printf("Primeiramente, informe a quantidade de multas para cadastrar.\n\nQuantidade: ");

    int numberOfTrafficTickets = readInt();
    int ticketsTypesIds[numberOfTrafficTickets];

    clearTerminal();

    for (int i = 0; i < numberOfTrafficTickets; i++) {
        int currentTicket = i + 1;
        printf("Multa %d de %d.\n\nTipos disponiveis para multas: \n%s\n\nInsira o tipo da multa: ", currentTicket, numberOfTrafficTickets, ticketTypesString);
        int ticketType = readInt();

        ticketsTypesIds[i] = (ticketType - 1);
        clearTerminal();
    }

    float totalResources = 0;
    char formattedString[numberOfTrafficTickets * 10];
    sprintf(formattedString, "");

    for (int i = 0; i < numberOfTrafficTickets; i++) {
        int ticketType = ticketsTypesIds[i];

        char* typeName = typesNames[ticketType];
        float typePrice = typesPrices[ticketType];

        totalResources += typePrice;

        strcat(formattedString, typeName);
        if ((i + 1) != numberOfTrafficTickets) {
            strcat(formattedString, ", ");
        }
    }

    printf("Multas registradas: \n[%s]\n\nValor total dos recursos: R$%.2f.", formattedString, totalResources);
}