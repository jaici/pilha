#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct pilha Pilha;
typedef struct no No;

struct no{
    float  info;
    struct No* next;
};

struct pilha {
    No* first;
};


Pilha* init(void);
void push(Pilha* s, float v);
float pop (Pilha* s);
int vazia (Pilha* s);
void libera(Pilha* s);
void printPilha(Pilha* s);

#endif // PILHA_H_INCLUDED
