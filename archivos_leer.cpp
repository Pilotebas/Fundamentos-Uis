#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


struct persona
{
    float estatura;
    float peso;
};

void imprimirVec(float vec[], int n)
{
    int i; 
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", vec[i]);
    }
    printf("\n");
}

int main()
{
    int n, i;
    FILE *archivo;
    // char path[100] = "./Programas\ Clase\ 2022-[1\ 2]/Fundamentos/estaturas.txt";
    char path[100] = "estaturas.txt";
    archivo = fopen(path, "r");
    if (archivo == NULL)
    {
        printf("El archivo %s no existe\n ", path);
    }
    else
    {
        fscanf(archivo, "%d", &n);
        printf("Leyendo %d lineas:\n", n);
        persona personas[n];
        for (i = 0; i < n; i++)
        {
            fscanf(archivo, "%f %f", &personas[i].estatura, &personas[i].peso);
            //fscanf(archivo, "%f %f", &estaturas[i], &pesos[i]);
        }
        //imprimirVec(estaturas, n);
        //imprimirVec(pesos, n);
        for (i = 0; i < n; i++)
        {
            printf("%.2f ", personas[i].estatura);
        }
        for (i = 0; i < n; i++)
        {
            printf("%.0f ", personas[i].peso);
        }
        for (i = 0; i < n; i++)
        {
            cout << "Personas Nro " << i << ": Estatura: " << personas[i].estatura << " Peso: " << personas[i].peso << endl << "\n";
        }
        cin >> n;

    }
    
}