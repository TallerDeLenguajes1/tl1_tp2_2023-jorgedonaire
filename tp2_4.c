#include <stdio.h>

struct{
int velocidad;//entre 1 y 3 GHz
int anio;//entre 2015 y 2023
int cantidad;//entre 1 y 8
char *tipo_cpu; //valores del arreglo tipos
} typedef compu;

void Lista(compu a[]);
void Vieja(compu a[]);
void Veloz(compu a[]);
int main()
{
    
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu arreglo[5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        arreglo[i].anio = 2015+rand()%9;
        arreglo[i].cantidad = 1+rand()%8;
        arreglo[i].velocidad = 1+rand()%3;
        arreglo[i].tipo_cpu = tipos[rand()%6];
    }
    printf("LISTA");
    Lista(arreglo);
    printf("VIEJA");
    Vieja(arreglo);
    printf("VELOZ");
    Veloz(arreglo);

    
    return 0;
}

void Lista(compu a[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Tipo cpu: %s\n", a[i].tipo_cpu);
        printf("Velocidad: %d\n",a[i].velocidad);
        printf("Anio: %d\n",a[i].anio);
        printf("Cantidad: %d\n",a[i].cantidad);
    }   
}

void Vieja(compu a[])
{
    int viejita, j;
    viejita = a->anio;
    for (int i = 0; i < 5; i++)
    {
        if (a->anio <= viejita)
        {
            viejita = a->anio;
            j = i;
        }
    }
    printf("Tipo cpu: %s\n", a[j].tipo_cpu);
    printf("Velocidad: %d\n",a[j].velocidad);
    printf("Anio: %d\n",a[j].anio);
    printf("Cantidad: %d\n",a[j].cantidad);
}

void Veloz(compu a[])
{
    int rapida, j;
    rapida = a->velocidad;
    for (int i = 0; i < 5; i++)
    {
        if (a->velocidad >= rapida)
        {
            rapida = a->velocidad;
            j = i;
        }
    }
    printf("Tipo cpu: %s\n", a[j].tipo_cpu);
    printf("Velocidad: %d\n",a[j].velocidad);
    printf("Anio: %d\n",a[j].anio);
    printf("Cantidad: %d\n",a[j].cantidad);
}