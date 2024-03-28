#include "monty.h"

/**
 * pchar - Prints the character at the top of the stack
 * @top: Pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void pchar(stack_t **top, unsigned int line_number)
{
    stack_t *temp = *top;

    if (temp == NULL)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    if (temp->n < 0 || temp->n > 127)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    putchar(temp->n);
    putchar('\n');
}

