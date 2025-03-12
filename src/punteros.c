#include <stdio.h>

int main(void){
    int var = 20;
    int *p = NULL;

    printf("El valor de la variable es %d y su dirección es %p\n", var, &var);

    p = &var;
    printf("El puntero apunta a %p y esa dirección contiene el valor %d\n", p, *p);
    return 0;
}