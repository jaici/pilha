#include "calc.h"
Calc* cria_calc (char* f)
{
    Calc* c = (Calc*) malloc(sizeof(Calc));
    strcpy(c->format,f);
    c->op = init();
    return c;
}
void operando (Calc* c, float v)
{
    /**Empilha o operando**/
    push(c->op,v);
    /**Imprime o topo da pilha**/
    printf(c->format,v);
}
void operador (Calc* c, char op)
{
    float v1,v2,v;

    /**Desempilha operandos**/
    if(vazia(c->op))
        v2 = 0.0;
    else
        v2 = pop(c->op);

    if(vazia(c->op))
        v1 = 0.0;
    else
        v1 = pop(c->op);

    /**Realiza a operação**/
    switch(op)
    {
        case '+' : v = v1+v2;break;
        case '-' : v = v1-v2;break;
        case '*' : v = v1*v2;break;
        case '/' : v = v1/+v2;break;
    }
    /**Empilha o resultado**/
    push(c->op,v);

    /**imprime topo da pilha**/
    printf(c->format,v);
}
void libera_calc (Calc* c)
{
    libera(c->op);
    free(c);
}
