#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    typedef struct compu
    {
        int velocidad;
        int anio;
        int cantidad;
        char *tipo_cpu;
    }compu;

compu cargarLista(compu *puntero,char v[]);
void mostrarLista(compu *p);
void masVieja(compu *p);
void mayorVelocidad(compu *p);

int main(){
    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    srand(time(NULL));
    compu *puntero;
    compu arreglo[5];
    puntero=arreglo;

    cargarLista(puntero,tipos);
    mostrarLista(puntero);
    masVieja(puntero);
    mayorVelocidad(puntero);
    getchar();
    return 0;
}

compu cargarLista(compu *puntero, char v[]){
    for (int i = 0; i < 5; i++)
    {
        (puntero + i)->anio=2015+rand()%9;
        (puntero + i)->cantidad=rand()%9+1;
        (puntero + i)->velocidad=rand()%4+1;
        (puntero + i)->tipo_cpu=v[rand()%6];
    }

}

void mostrarLista(compu *p){
    puts("******** LISTA DE PC *********");
    for (int i = 0; i < 5; i++)
    {
        printf("PC Nro %d\n", i);
        printf("Anio: %d\n", (p+i)->anio);
        printf("Cantidad de nucleos: %d\n",(p+i)->cantidad);
        printf("Velocidad: %d\n",(p+i)->velocidad);
        printf("Tipo de CPU: %s\n", (p+i)->tipo_cpu);
    }
}
void masVieja(compu *p){
    int anios=2023;
    int indice = 0;
    for (int i = 0; i < 5; i++)
    {  
        if ((p+i)->anio < anios)
        {
            anios = (p+i)->anio;
            indice=i;
        }    
    }
    printf("******* La PC mas vieja es ******* \n");
    printf("PC Nro %d\n", indice);
    printf("Anio: %d\n", (p+indice)->anio);
    printf("Cantidad de nucleos: %d\n",(p+indice)->cantidad);
    printf("Velocidad: %d\n",(p+indice)->velocidad);
    printf("Tipo de CPU: %s\n", (p+indice)->tipo_cpu);
}

void mayorVelocidad(compu *p){
    int velocidad=0;
    int indice = 0;

    for (int i = 0; i < 5; i++)
    {  
        if ((p+i)->velocidad > velocidad)
        {
            velocidad = (p+i)->velocidad;
            indice=i;
        }    
    }
    printf("******* La PC mas rapida es ******* \n");
    printf("PC Nro %d\n", indice);
    printf("Anio: %d\n", (p+indice)->anio);
    printf("Cantidad de nucleos: %d\n",(p+indice)->cantidad);
    printf("Velocidad: %d\n",(p+indice)->velocidad);
    printf("Tipo de CPU: %s\n", (p+indice)->tipo_cpu);
}