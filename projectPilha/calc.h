#ifndef CALC_H_INCLUDED
#define CALC_H_INCLUDED
/**Inclui biblioteca de pilha**/
#include "pilha.h";

typedef struct calc Calc;

struct calc{
    char format[21]; /**Formato para impressão**/
    Pilha* op;      /**Pilha de operandos**/
};
/* funções exportadas */
Calc* cria_calc (char* f);
void operando (Calc* c, float v);
void operador (Calc* c, char op);
void libera_calc (Calc* c);


#endif // CALC_H_INCLUDED
