#include <stdio.h>


void divisao(int* end_var1, int* end_var2) {
    int resto;
    resto = *end_var1%*end_var2;
    
    *end_var1/=*end_var2;
    *end_var2 = resto;
}