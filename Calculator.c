#include "calculator.h"

double evaluate(operationFptr operation,double operand1,double operand2)
{
	return (*operation)(operand1,operand2);
}

double add(double operand1,double operand2)
{
	return operand1+operand2;
}

double sub(double operand1,double operand2)
{
	return operand1-operand2;
}

double div(double operand1,double operand2)
{
	return operand1/operand2;
}

double mul(double operand1,double operand2)
{
	return operand1*operand2;
}
