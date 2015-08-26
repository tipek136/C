/* 
 * File:   main.c
 * Author: Tomáš
 *
 * Created on 26. srpna 2015, 13:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    char a;
    printf("Ahoj, tady furt něco opakuju\n");
    printf("napiš něco: ");
    scanf("%c", &a);
    printf("%c, %c!", a, a);
    return (EXIT_SUCCESS);
}

