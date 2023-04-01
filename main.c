#include <stdio.h>

int main() {
    int nota, cont=0,suma=0;
    float prom;
    printf("Ingrese las notas del alumno, -1 para terminar:\n");
    scanf ("%d",&nota);
    while (nota!=-1){
        cont++;
        printf("Ingrese las notas del alumno, -1 para terminar:\n");
        scanf ("%d",&nota);
        suma=suma+nota;

    }
    prom = suma/cont;

    printf ("El promedio es:%.2f",prom);
    return 0;
}
