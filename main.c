#include <stdio.h>
#include <stdlib.h>

void escalona (int vet[], int x, int y);
void inverte (int **vet, int y);
void exibe (int **vet, int x, int y);

int main (void)
{
    int *vet;
    int x, y, i;
    printf("digite o nº de colunas da matriz\n");
    scanf("%d", &x);
    printf("digite o nº de linhas da matriz\n");
    scanf("%d", &y);
    n=x*y
    vet=malloc(n*sizeof(int));
    printf("digite os elementos da matriz\n");
    for (i=0; i<x; i++)
    {
        scanf("%d", vet[i]);
    }
    escalona(vet, x, y);
    return 0;
}

void escalona (int vet[], int x, int y)
{
    int i, j, k, pivo=0, n, anulador=0;
    for (i=0; i<x; i++)
    {
        if (vet)
        pivo=vet[i];
        printf("pivo:%d", pivo);
        /*
        for (j=y*i; j<)
        {
                if (anulador==0)
                {
                    inverte(vet, y);
                }
                else if (pivo>anulador)
                {
                    vet[k]=(anulador*(*vet[k]))-(pivo*(*vet[k-x]));
                }
                else
                {
                    vet[k]=(anulador*(*vet[k]))+(pivo*(*vet[k-x]));
                }
                n++;
        }
        */
    }
}

/*
void inverte (int **vet, int y)
{
    int i, j, aux;
    for (i=1; i<2; i++)
    {
        for (j=0; j<y; j++)
        {
            aux=vet[i][j];
            vet[i][j]=vet[i+1][j];
            vet[i+1][j]=aux;
        }
    }
}

void exibe (int **vet, int x, int y)
{
    int i, j, c;
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            printf("%d", vet[i][j]);
        }
    }
}
*/
