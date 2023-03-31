#include <stdio.h>

int main() {
    int nota, cont=0,suma;
    printf("Ingrese las notas del alumno, 0:\n");
    scanf ("%d",&nota);
    do {
        if (nota!=0)
            cont++;
        suma=nota;
        suma+=nota;
    }while (nota!=0);
    printf ("El primedio es:%d",suma/cont);
    return 0;
}
