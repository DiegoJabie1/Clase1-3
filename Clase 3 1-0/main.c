#include <stdio.h>
#include <stdlib.h>

void sumarNumeros(int,int);

int main()
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);
    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);

    suma= int sumarNumeros(int numeroUno, int numeroDos);

}
void sumarNumeros(int unNumero,int otroNumero)
{
    int resultado;
    resultado=unNumero+otroNumero;
    printf("El resultado es: &d",resultado);
}
