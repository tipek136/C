/* 
 * File:   main.c
 * Author: Tomáš
 *
 * Created on 26. srpna 2015, 14:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float x;
    float y;
    float soucet;
    float rozdil;
    float soucin;
    float podil;
    
    printf("Vítejte v kalkulačce.\n");
    printf("Zadej první číslo: ");
    scanf("%g", &x);
    printf("Zadej druhé číslo: ");
    scanf("%g", &y);
    
    soucet = x + y;
    rozdil = x - y;
    soucin = x * y;
    podil = x / y;
    
    printf("Součet: %g\n", soucet);
    printf("Rozdil: %g\n", rozdil);
    printf("Součin: %g\n", soucin);
    printf("Podíl: %g\n", podil);
    return (EXIT_SUCCESS);
}

