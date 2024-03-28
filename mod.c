#include "monty.h"

/**
 * mod - Computes the rest of the division of the second top element
 * @top: Pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void modulo(stack_t **top, unsigned int line_number)
{
	stack_t *temp = *top;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp->next->n %= temp->n;
	pop(top, line_number);
}

