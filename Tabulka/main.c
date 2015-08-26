/* 
 * File:   main.c
 * Author: Tomáš
 *
 * Created on 26. srpna 2015, 15:07
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int maxInt = INT_MAX;
    short maxShort = SHRT_MAX;
    char maxChar = CHAR_MAX;
    char sizeInt = sizeof(int);
    char sizeShort = sizeof(short);
    char sizeChar = sizeof(char);
    
    printf("INT: zabírá %d B a největší možné číslo je %d\n", sizeInt, maxInt);
    printf("SHORT: zabírá %d B a největší možné číslo je %d\n", sizeShort, maxShort);
    printf("CHAR: zabírá %d B a největší možné číslo je %d", sizeChar, maxChar);
    
    return (EXIT_SUCCESS);
}

