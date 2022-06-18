#include <stdio.h>
#include <stdlib.h>

struct grafo
{
    int nodos; 
    int arcos;
    int **adj;

};
typedef struct grafo *Grafo;

typedef struct
{
    int nodoI; //nodo inicial
    int nodoF; //nodo final
}Edge;

//crear enlaces
Edge EDGE (int nodoI, int nodoF)
{
    Edge t;
    t.nodoI = nodoI;
    t.nodoF = nodoF;
    return(t);
}

int main()
{
    Edge enlace;
    enlace=EDGE(1,2);
    Grafo G = malloc(sizeof *G);
    int **t=malloc(r*sizeof(int*));
    
    return 0;
}