#include "monty.h"

/**
 * mul - Multiplies the second top element by the top element of the stack
 * @top: Pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void multiply(stack_t **top, unsigned int line_number)
{
	stack_t *temp = *top;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp->next->n *= temp->n;
	pop(top, line_number);
}

