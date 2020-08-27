#include <stdio.h>
#include "calculator.h"

int main()
{
	double operand1, operand2, result;
	char operation;
	char flag = 1;
	
	while(flag != '0')
	{
		system("cls");
		printf("Enter first operand, operation, and second operand respectively: ");
		scanf("%lf %c%lf",&operand1,&operation,&operand2);
		switch(operation)
		{
			case '+': 
				result = evaluate(add,operand1,operand2);
				break;
			case '-': 
				result = evaluate(sub,operand1,operand2);
				break;
			case '*': 
				result = evaluate(mul,operand1,operand2);
				break;
			case '/': 
				result = evaluate(div,operand1,operand2);
				break;
		}
		printf("Result = %.2lf\n",result);
		printf("Press any key to continue, 0 to terminate\n");
		flag = getch();
	}
	printf("Program terminated\n");
	
	return 0;
}


