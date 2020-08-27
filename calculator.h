#ifndef _CALCULATOR_H
#define _CALCULATOR_H

typedef double (*operationFptr)(double,double);

double evaluate(operationFptr operation,double operand1,double operand2);
double add(double operand1,double operand2);
double sub(double operand1,double operand2);
double div(double operand1,double operand2);
double mul(double operand1,double operand2);

#endif