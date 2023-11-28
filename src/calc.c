#include <stdio.h>
#include <string.h>
#include <ncurses.h>
#include "calculations.c"
#include "percentage.c"

int main(int argc, char *argv[])
{
  if (argc == 2 && strncmp(argv[1], "-p", 2) == 0)
{
    calculate_percentage();
    return 0;
}

    if (argc != 2)
    {
        printf("Usage: calc expression, or calc -p (for percentage based calculations) \n");
        return 1;
    }
    if (argc == 2)
    {
        char *expression = argv[1];
        printf("%.2f\n", calculate_expression(expression));
        return 0;
    }
}
