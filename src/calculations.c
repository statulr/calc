#include <stdio.h>
#include "calculations.h"

double add(double operand1, double operand2)
{
    return operand1 + operand2;
}

double subtract(double operand1, double operand2)
{
    return operand1 - operand2;
}

double multiply(double operand1, double operand2)
{
    return operand1 * operand2;
}

double divide(double operand1, double operand2)
{
    if (operand2 != 0)
    {
        return operand1 / operand2;
    }
    else
    {
        fprintf(stderr, "Error: Division by zero is not allowed. Result: undefned\n");
        return 0;
    }
}

double calculate_expression(char *expression)
{
    char operator;
    double operand1, operand2;

    sscanf(expression, "%lf%c%lf", &operand1, &operator, & operand2);

    switch (operator)
    {
    case '+':
        return add(operand1, operand2);
    case '-':
        return subtract(operand1, operand2);
    case '*':
        return multiply(operand1, operand2);
    case '/':
        if (operand2 != 0)
        {
            return divide(operand1, operand2);
        }
        else
        {
            fprintf(stderr, "Error: Division by zero is not allowed.\n");
            return 0;
        }
    default:
        fprintf(stderr, "Error: Invalid operator. Use +, -, *, or /\n");
        return 0;
    }
}
