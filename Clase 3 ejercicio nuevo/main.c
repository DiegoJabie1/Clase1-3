#include <stdio.h>
#include <stdlib.h>

int pedirNota(void)
{
int nota;
do
{
    printf("Ingrese su numero: ");
    scanf("%d",&nota);

}while(nota>10||nota<0);

return nota;
}

float sacarPromedio(int suma,int cantidad)
{
float retorno;
retorno= (float)suma/cantidad;
return retorno;
}

int aprobarMateria(int notaMinima,int nota)
{
if(nota<=notaMinima)
    {
        return 0;
    }
return 1;
}

void ejercicioUno(void)
{
    int nota;
    int contadorAprobados=0;
    int contadorDesaprobados=0;
    float promedioAprobados;
    float promedioDesaprobados;
    int i;

    for(i;i<5;i++)
        {
         nota=pedirNota();
        }
}

int main()
{
ejercicioUno();
}

