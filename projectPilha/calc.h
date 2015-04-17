#ifndef CALC_H_INCLUDED
#define CALC_H_INCLUDED

typedef struct calc Calc;
/* funções exportadas */
Calc* cria_calc (char* f);
void operando (Calc* c, float v);
void operador (Calc* c, char op);
void libera_calc (Calc* c);


#endif // CALC_H_INCLUDED
