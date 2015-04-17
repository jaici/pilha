#include "pilha.h"
// Declaração de funções privadas
No* insertTop(No* l, float v);
No* removeTop(No* l);
/**
*   Autora: Jaicimara Weber
*   Data: 13/04/2015
*   Descriçao: inicializa pilha.
**/
Pilha* init(void)
{
    Pilha* s = (Pilha*) malloc(sizeof(Pilha));
    s->first = NULL;
    return s;
}
/**
*   Autora: Jaicimara Weber
*   Data: 13/04/2015
*   Descriçao: insere dado no inicio da lista - funcao privada
**/
No* insertTop(No* l, float v)
{
    No* p = (No*) malloc(sizeof(No));
    p->info = v;
    p->next = l;
    return p;
}

/**
*   Autora: Jaicimara Weber
*   Data: 13/04/2015
*   Descriçao: libera memoria do dado no inicio da lista - funcao privada
**/
No* removeTop(No* l)
{
    No* p = l->next;
    free(l);
    return p;
}
/**
*   Autora: Jaicimara Weber
*   Data: 13/04/2015
*   Descriçao: insere dado na pilha
**/
void push(Pilha* s, float v)
{
    s->first = insertTop(s->first, v);
}
/**
*   Autora: Jaicimara Weber
*   Data: 13/04/2015
*   Descriçao: retira o dado na pilha
**/
float pop (Pilha* s)
{
    float value;
    if(vazia(s)){
        printf("Pilha Vazia.\n");
        exit(1);/*aborta programa*/
    }
    value = s->first->info;
    s->first = removeTop(s->first);
    return value;
}
/**
*   Autora: Jaicimara Weber
*   Data: 13/04/2015
*   Descriçao: retorna 0 caso pilha esteja vazia, senao 1
**/
int vazia (Pilha* s)
{
    return (s->first == NULL);
}
/**
*   Autora: Jaicimara Weber
*   Data: 13/04/2015
*   Descriçao: libera todo espaço de memoria da pilha
**/
void libera(Pilha* s)
{
    No* q = s->first;
    while (q!=NULL) {
        No* temp = q->next;
        free(q);
        q = temp;
    }
    free(s);
}
/**
*   Autora: Jaicimara Weber
*   Data: 13/04/2015
*   Descriçao: Exibir dados na pilha
**/
void printPilha(Pilha* s)
{
    No* temp;
    for (temp = s->first; temp != NULL; temp = temp->next)
            printf("%f\n",temp->info);

}
