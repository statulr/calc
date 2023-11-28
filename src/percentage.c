#include <stdio.h>
#include <ncurses.h>
#include "calculations.h"

void calculate_percentage()
{
    int choice;
    double value1, value2;

    initscr();
    cbreak();
    noecho();

    printw("Which of the following do you want to calculate:\n");
    printw("1. %% of Something\n");
    printw("2. Calculate %% of Whole\n");
    refresh();

    choice = getch() - '0';
    endwin();

    switch (choice)
    {
    case 1:
        printf("Enter the total value: ");
        scanf("%lf", &value1);
        printf("Enter the percentage you want to find: ");
        scanf("%lf", &value2);
        printf("The value is: %.2f\n", (value2 / 100) * value1);
        break;
    case 2:
        printf("Enter the partial value: ");
        scanf("%lf", &value1);
        printf("Enter the total value: ");
        scanf("%lf", &value2);
        if (value2 != 0)
        {
            printf("The percentage is: %.2f%%\n", (value1 / value2) * 100);
        }
        else
        {
            fprintf(stderr, "Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        fprintf(stderr, "Invalid choice.\n");
    }
}
