#include <stdio.h>

int codigoDeArea(unsigned int number) {
    return number/1000000000;
}

int parEmImpar(unsigned int number) {
    return number | 1;
}


int par(unsigned int number) {
    return !(number & 1);
}