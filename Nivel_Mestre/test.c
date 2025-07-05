//
// Created by Guilherme on 05/07/2025.
//
#include <stdio.h>

int main() {

    int populacao = 10000000;
    double pib = 500000000000.0;

    double pibpercapita = pib / populacao;

    printf("%.2lf", pibpercapita);

    return 0;
}